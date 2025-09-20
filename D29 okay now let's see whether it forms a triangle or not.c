#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>0 && b>0 &&c>0){
            if(a+b+c==180){
                printf("The entered sides forms a triangle");
            }
            else{printf("The entered sides does not form a triangle");}

    }else{printf("Enter valid numbers");}
}
