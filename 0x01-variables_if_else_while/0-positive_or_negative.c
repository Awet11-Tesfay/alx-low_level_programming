#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
*main-Entry point
*
*Return:always 0.
*/
int main(void)
int n;
printf("please enter your number: ");
scanf("%d", &n );
if(n > 0)
{
print("the number is positive"\n,n);
}
else if(n==0)
{
printf("the  number is zero"\n,n);
}
else
{
printf("the number is negative"\n,n);
}
return 0;
}
