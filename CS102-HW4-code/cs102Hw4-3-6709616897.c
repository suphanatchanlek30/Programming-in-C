#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct {
    int accountNumber;
    char name[50];
    float balance;
} Person;

Person customers[MAX_SIZE];
int customer_Count = 0;

// Prototype
void addCustomer();
void deposit();
void withdraw();
void displayCustomers();

int main(void) {
    int choice;

    do {
        printf("Bank Management System\n");
        printf("1. Add New Customer\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display All Customers\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: {
                // function addCustomer()
                addCustomer();
                break;
            }
            case 2: {
                // function deposit()
                deposit();
                break;
            }
            case 3: {
                // function withdraw()
                withdraw();
                break;
            }
            case 4: {
                // function displayCustomers()
                displayCustomers();
                break;
            }
            case 5: {
                printf("Exiting program.\n");
                break;
            }
            default: {
                printf("Invalid choice. Please try again.\n");
            }
        }

    } while(choice != 5);

    return 0;
}

// Enter 1
void addCustomer() {
    if (customer_Count < MAX_SIZE) {
        Person newCustomer;

        printf("Enter account number: ");
        scanf("%d", &newCustomer.accountNumber);
        
        printf("Enter customer name: ");
        getchar();
        fgets(newCustomer.name, 50, stdin);
        newCustomer.name[strcspn(newCustomer.name, "\n")] = 0;
        printf("Enter initial balance: ");
        
        scanf("%f", &newCustomer.balance);

        customers[customer_Count] = newCustomer;
        customer_Count++;
        
        printf("Customer added successfully.\n\n");
    } else {
        printf("Customer list is full!\n");
    }
}

// Enter 2
void deposit() {
    int accountNumber;
    float amount;
    int i;

    printf("Enter account number for deposit: ");
    scanf("%d", &accountNumber);
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    for (i = 0; i < customer_Count; i++) {
        if (customers[i].accountNumber == accountNumber) {
            customers[i].balance += amount;
            printf("Deposit successful. New balance: %.2f\n\n", customers[i].balance);
            return;
        }
    }
    printf("Account not found.\n");
}

// Enter 3
void withdraw() {
    int accountNumber;
    float amount;
    int i;

    printf("Enter account number for withdrawal: ");
    scanf("%d", &accountNumber);
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    for (i = 0; i < customer_Count; i++) {
        if (customers[i].accountNumber == accountNumber) {
            if (customers[i].balance >= amount) {
                customers[i].balance -= amount;
                printf("Withdrawal successful. New balance: %.2f\n\n", customers[i].balance);
            } else {
                printf("Insufficient balance.\n");
            }
            return;
        }
    }
    printf("Account not found.\n");
}

// Enter 4
void displayCustomers() {
	int i;
    if (customer_Count == 0) {
        printf("No customers to display.\n");
    } else {
        printf("Customer List:\n");
        for (i = 0; i < customer_Count; i++) {
            printf("Account Number: %d, Name: %s, Balance: %.2f\n", customers[i].accountNumber, customers[i].name, customers[i].balance);
        }
        printf("\n");
    }
}

