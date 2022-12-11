
//program to swap any 2 numbers without using temporary var
#include <stdio.h>

int main() {
    int a,b;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d",a)&& printf("%d \n",b);
    return 0;
}
