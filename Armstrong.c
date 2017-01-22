/*
Write a program to print Armstrong Number upto n terms using function.
*/

//#include<stdio.h>
#include <stdio.h>
int main()
{
    int a,b, remainder, result = 0;

    printf("Enter a number : ");
    scanf("%d", &a);

    b=a;

    while (b!= 0)
    {
        remainder = b%10;
        result += remainder*remainder*remainder;
        b/= 10;
    }

    if(result == a)
        printf("\n%d is an Armstrong number.",a);
    else
        printf("\n%d is not an Armstrong number.",a);

    return 0;
}

