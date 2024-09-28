#include<stdio.h>
int main(){
    int a,b,c;
    int check1,check2;

    scanf("%d %d %d",&a,&b,&c);

    check1 = b-a;
    check2 = c-b;

    if(check1>=check2){
        printf("%d",check1-1);
    } else {
        printf("%d",check2-1);
    }

    return 0;
}