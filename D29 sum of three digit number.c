#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digit, num, first, second , third, sum;
    printf("Enter any three digit number: ");
    scanf("%d",&digit);
    if(digit>99 && digit<1000){
        first=digit/100;
        num=digit%100;
        second=num/10;
        num=num%10;
        third = num;

        sum = first + second + third;
        printf("The sum of the digits is: %d",sum);
    }

    else{printf("The number is not a three digit number");}
    return 0;
}
