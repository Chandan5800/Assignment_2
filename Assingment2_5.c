//Print all elements in reverse order
#include <stdio.h>
int main()
{
	int array[10],i,sum=0;
	for(i=0;i<10;i++)
	{
	printf("Enter number:");
	scanf("%d",&array[i]);
    }
    for(i=9;i>=0;i--)
    {
    	printf("%d ",array[i]);
	}
	return 0;
}
