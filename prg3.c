#include<stdio.h>
int main(){
    int a,b;
    printf("enter a,b\n:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n%d",a,b);
}
