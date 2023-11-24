#include<stdio.h>
int main()
{
    int number1, number2, sub;

    printf("Enter two integers:");
    scanf("%d %d",&number1, &number2);

    //calculate sub;
 sub = number1 - number2;

    printf("%d",sub);

    return 0;
}