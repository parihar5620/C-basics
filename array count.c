#include<stdio.h>
int main()
{
	int array[1000],count;
	printf("enter tge no. of elements in an array: ");
	scanf("%d",&count);
	printf("enter the elements: ");
	for(int i=0;i<count;i++)
	{
	    scanf("%d",&array[i]);
	}
	printf("the array is : \n");
	for(int j =0;j<count;j++)
	{
	    printf("%d ",array[j]);
	}
	return 0;
}