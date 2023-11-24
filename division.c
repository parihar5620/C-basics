#include<stdio.h>
int main()
{
    int number1, number2,division;

    printf("Enter two integers:");
    scanf("%d %d",&number1, &number2);

    //calculate the division;
division = number1 / number2;

    printf("%d",division);

    return 0;
}