#include <stdio.h>
#include <malloc.h>

int main()
{
	
	int size,i,*ptr;
	printf("enter the no of values:");
	scanf("%d",&size);
	int ptr=(int*)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
	{
		printf("%d\n",ptr[i]);
	}
	printf("values inseret:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("\nvlaues are:");
	for(i=0;i<size;i++)
	{
		printf("%d\n",ptr[i]);
	}
	
	return 0;
}
