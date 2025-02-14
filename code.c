#include <stdio.h>
#include <stdlib.h>
#define MAX 30

int n,pos,value,arr[MAX];

void create()
{
    printf("\nEnter Array size : ");
    scanf("%d",&n);
    if(n>=MAX || n<=0)
    {
        printf("Size should between 0 to %d \n",MAX);
        return;
    }
    printf("Enter Array Elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void insert()
{
    printf("\nEnter position : ");
    scanf("%d",&pos);
    printf("\nEnter value : ");
    scanf("%d",&value);

    for(int i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    n++;
}

void deletion()
{
    printf("\nEnter the position of value to be deleted : ");
    scanf("%d",&pos);

    for(int i=pos;i<=n;i++)
    {
        arr[i-1]=arr[i];
    }
    n--;
}

void display()
{
    printf("Displaying Array Elements...\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("--------------------------------------------------------------------------------------------------------------------");
        printf("\n1.CREATE ARRAY\n");
        printf("2.INSERT ELEMENT\n");
        printf("3.DELETE ELEMENT\n");
        printf("4.DISPLAY ARRAY \n");
        printf("5.EXIT\n");
        printf("--------------------------------------------------------------------------------------------------------------------");
        printf("\nEnter choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            create();
            break;
        case 2:
            insert();
            break;
        case 3:
            deletion();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Loop Ended!!");
            return 0;
        default:
            printf("Invalid choice");
        }

    }
    return 0;
}
