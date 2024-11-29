#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COURSES 100
#define MAX_STUDENTS 100
#define MAX_REGISTERED_COURSES 10

typedef struct {
    char courseCode[10];
    char courseName[50];
    int credits;
} Course;

typedef struct {
    char studentID[10];
    char name[50];
    Course registeredCourses[MAX_REGISTERED_COURSES];
    int courseCount;
} Student;

Course courses[MAX_COURSES];
Student students[MAX_STUDENTS];
int courseCount = 0, studentCount = 0;

// Function prototypes
void addCourse();
void addStudent();
void registerCourse();
void displayStudentCourses();
void saveData();
void loadData();

int main(void) {
    int choice;
    while (1) {
        printf("\n===== Course Registration System =====\n");
        printf("1. Add New Course\n");
        printf("2. Add New Student\n");
        printf("3. Register Course for Student\n");
        printf("4. Display Student's Registered Courses\n");
        printf("5. Save Data\n");
        printf("6. Load Data\n");
        printf("7. Exit\n");
        printf("Select an option (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addCourse();
                break;
            case 2:
                addStudent();
                break;
            case 3:
                registerCourse();
                break;
            case 4:
                displayStudentCourses();
                break;
            case 5:
                saveData();
                break;
            case 6:
                loadData();
                break;
            case 7:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

void addCourse() {
    if (courseCount >= MAX_COURSES) {
        printf("Cannot add more courses.\n");
        return;
    }

    Course newCourse;

    printf("Enter Course Code: ");
    scanf("%9s", newCourse.courseCode);
    printf("Enter Course Name: ");
    getchar();
    fgets(newCourse.courseName, 50, stdin);
    newCourse.courseName[strcspn(newCourse.courseName, "\n")] = '\0'; // Remove newline
    printf("Enter Credits: ");
    scanf("%d", &newCourse.credits);

    courses[courseCount++] = newCourse;
    printf("Course added successfully.\n");
}

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Cannot add more students.\n");
        return;
    }

    Student newStudent;

    printf("Enter Student ID: ");
    scanf("%9s", newStudent.studentID);
    printf("Enter Student Name: ");
    getchar();
    fgets(newStudent.name, 50, stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';
    newStudent.courseCount = 0;

    students[studentCount++] = newStudent;
    printf("Student added successfully.\n");
}

void registerCourse() {
	int i, j;
    char studentID[10], courseCode[10];
    printf("Enter Student ID: ");
    scanf("%9s", studentID);
    printf("Enter Course Code to Register: ");
    scanf("%9s", courseCode);

    for (i = 0; i < studentCount; i++) {
        if (strcmp(students[i].studentID, studentID) == 0) {
            if (students[i].courseCount >= MAX_REGISTERED_COURSES) {
                printf("Student has already registered the maximum number of courses.\n");
                return;
            }

            for (j = 0; j < courseCount; j++) {
                if (strcmp(courses[j].courseCode, courseCode) == 0) {
                    students[i].registeredCourses[students[i].courseCount++] = courses[j];
                    printf("Course registered successfully.\n");
                    return;
                }
            }
            printf("Course not found.\n");
            return;
        }
    }
    printf("Student not found.\n");
}

void displayStudentCourses() {
	int i, j;
    char studentID[10];
    printf("Enter Student ID: ");
    scanf("%9s", studentID);

    for (i = 0; i < studentCount; i++) {
        if (strcmp(students[i].studentID, studentID) == 0) {
            printf("Courses registered by %s:\n", students[i].name);
            printf("%-15s %-40s %-10s\n", "Course Code", "Course Name", "Credits");
            for (j = 0; j < students[i].courseCount; j++) {
                printf("%-15s %-40s %-10d\n",
                       students[i].registeredCourses[j].courseCode,
                       students[i].registeredCourses[j].courseName,
                       students[i].registeredCourses[j].credits);
            }
            return;
        }
    }
    printf("Student not found.\n");
}

void saveData() {
	int i, j;
	FILE *file = fopen("registration_data.txt", "w");
    if (!file) {
        printf("Error saving data.\n");
        return;
    }

    // Save course data
    fprintf(file, "%d\n", courseCount);
    for (i = 0; i < courseCount; i++) {
        fprintf(file, "%s\n%s\n%d\n",
                courses[i].courseCode,
                courses[i].courseName,
                courses[i].credits);
    }

    // Save student data
    fprintf(file, "%d\n", studentCount);
    for (i = 0; i < studentCount; i++) {
        fprintf(file, "%s\n%s\n%d\n",
                students[i].studentID,
                students[i].name,
                students[i].courseCount);
        for (j = 0; j < students[i].courseCount; j++) {
            fprintf(file, "%s\n", students[i].registeredCourses[j].courseCode);
        }
    }

    fclose(file);
    printf("Data saved successfully.\n");
}

void loadData() {
	int i,j;
	FILE *file = fopen("registration_data.txt", "r");
    if (!file) {
        printf("Error loading data.\n");
        return;
    }

    // Load course data
    fscanf(file, "%d\n", &courseCount);
    for (i = 0; i < courseCount; i++) {
        fgets(courses[i].courseCode, sizeof(courses[i].courseCode), file);
        strtok(courses[i].courseCode, "\n"); // Remove newline
        fgets(courses[i].courseName, sizeof(courses[i].courseName), file);
        strtok(courses[i].courseName, "\n");
        fscanf(file, "%d\n", &courses[i].credits);
    }

    // Load student data
    fscanf(file, "%d\n", &studentCount);
    for (i = 0; i < studentCount; i++) {
        fgets(students[i].studentID, sizeof(students[i].studentID), file);
        strtok(students[i].studentID, "\n");
        fgets(students[i].name, sizeof(students[i].name), file);
        strtok(students[i].name, "\n");
        fscanf(file, "%d\n", &students[i].courseCount);
        for (j = 0; j < students[i].courseCount; j++) {
            fgets(students[i].registeredCourses[j].courseCode, sizeof(students[i].registeredCourses[j].courseCode), file);
            strtok(students[i].registeredCourses[j].courseCode, "\n");
        }
    }

    fclose(file);
    printf("Data loaded successfully.\n");
}

