#include <stdio.h>

void update()
{
	int rn;
	struct list*ptr;
	printf("\nenter rollno: ");
	scanf("\n%d",&rn);
	printf("\n enter new roll no: ");
	scanf("\n%d",&ptr->rollno);
	for(ptr=start;ptr->rollno!=rn&&ptr!=NULL;ptr=ptr->next);
	if(ptr)
	{
		printf("\n enter new roll no :");
		scanf("%d\n",&ptr->rollno);
	}
	else
	{
		printf("\n invalid");
	}
}

void delete()
{
	int rn,ag;
	struct list*ptr,*ptr1;
	printf("\n enter rollno :");
	scanf("\n%d",&rn);
	for(ptr=start;ptr->rollno!=rn&&ptr!=NULL,ptr1=ptr;ptr=ptr->next);
	if(ptr)
	{
		ptr1->next=ptr->next;
		free(ptr);
		ptr1=ptr->next;
		printf("\n enter new roll no: ");
		scanf("%d\n",&ptr->rollno);
	}
		else

	{
		printf("\ninvalidity");
	}

	void insert()
	{
		int i,pos,rn,ag,j;
		struct list *ptr,*ptr1;
		printf("\n enter rollno: ");
		scanf("%d\n",&rn);
		printf("\n enter new age: ");
		scanf("%d\n",&ag);
		ptr->next=NULL;
if(start==NULL)
	printf("empty list");
else
		{
	if(pos==1)
			{
		start=start->next;
		ptr=start;
			}
			else
			{
				for(i=1;i<pos;i++);
				if(ptr->next!=NULL)
				{
					ptr1->next=ptr->next;
					ptr=ptr->next;
				}
				else
				{
					ptr=ptr1->next;
					ptr=last;
				}
			}
		}