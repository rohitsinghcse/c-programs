//Write a program to check wheather given number is amstrong or not
#include <stdio.h>
#include <math.h>


int main()
{
    int number,n=0,originalNumber,result,rem;
    printf("Enter a number : ");
    scanf("%d",&number);
    originalNumber = number;
    while(originalNumber!=0)
    {
        originalNumber/=10;
        n++;
    }
    printf("Number of digits = %d",n);
    originalNumber = number;
    while(originalNumber!=0)
    {
        rem = originalNumber % 10;
        result = result + pow(rem,n) ;
        originalNumber = originalNumber/ 10;
    }
    printf("%d",result);
    (result==number)?printf("Armstrong number \n"): printf("NOT a Armstrong Number");
    return 0;
}

