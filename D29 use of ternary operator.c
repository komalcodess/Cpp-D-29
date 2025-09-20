#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, greatest;
    printf("Enter a: ");
    scanf("%d",&a);
     printf("Enter b: ");
    scanf("%d",&b);
     printf("Enter c: ");
    scanf("%d",&c);

    greatest=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("The greatest is %d",greatest);
    return 0;
}
