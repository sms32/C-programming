#include<stdio.h>
int main(void)
{
int a, b, temp;
printf("Enter two numbers a and b ");
scanf("%d %d", &a, &b);
printf("\n Before swapping \na = %d\nb = %d\n", a, b);
a=a+b;
b=a-b;
a=a-b 
printf("\n After swapping \na = %d\nb = %d\n", a, b);
return 0; 
}
