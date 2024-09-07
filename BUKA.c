#include<stdio.h>
char a[105],b[105],p;

int main(){
    // input
    scanf("%s %c %s",a,&p,b);

    int la=0, lb=0;

    for(int i=0; a[i]!='\0' || b[i]!='\0'; i++){
        if(a[i] != '\0') la++;
        if(b[i] != '\0') lb++;
    }

    if(p == '*'){
        printf("1");
        for(int i=0; i < la + lb - 2; i++){
            printf("0");
        }
    } else {
        if(la >= lb){
            a[la-lb]++;
            printf("%s", a);
        } else {
            b[lb-la]++;
            printf("%s", b);
        }
    }

    return 0;
}