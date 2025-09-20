#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a, b, c;
    printf("Enter a: ");
    scanf("%d",&a);
     printf("Enter b: ");
    scanf("%d",&b);
     printf("Enter c: ");
    scanf("%d",&c);

    if(a>b){
        if(a>c){printf("The greatest among all is %d",a);}
        else {printf("The greatest among all is %d",c);}}

     else if(b>c){printf("the greatest among all is %d",b);}
    else{printf("the greatest among all is %d",c);}
    return 0;
}
