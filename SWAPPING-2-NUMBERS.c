//SWAPPING USING THIRD VARIABLE
#include<stdio.h>
int main(void)
{
int a, b, temp;
printf("Enter two numbers a and b ");
scanf("%d %d", &a, &b);
temp = a;
a = b;
b = temp;
printf("\n After swapping \na = %d\nb = %d\n", a, b);
return 0; 
}




