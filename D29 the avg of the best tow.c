#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1, s2, s3, sum, avg;
    printf("Enter the score of one subject not more than 25: ");
    scanf("%d",&s1);
    printf("Enter the score of other subject not more than 25: ");
    scanf("%d",&s2);
     printf("Enter the score of the third subject not more than 25: ");
    scanf("%d",&s3);

    if(s1<0 || s1>25 || s2<0 || s2>25 || s3<0 || s3>25 ){
        printf("Not a valid number.");
    }
    else{
    if(s1<s2 && s1<s3){
    sum = s2 + s3;}
    else if(s2<s1 && s2<s3){
    sum = s1 + s3;}
    else {sum= s1+s2;}
    avg= sum/2;
    printf("The avg of the best two is: %d",avg);}

    return 0;
}
