#include<stdio.h>
#define QSIZE 5

void insert_rear(int q[],int item,int *r)
{
    if (*r==QSIZE-1)
    printf("queue overflow");
    else
    {
        (*r)++;
        q[*r]=item;
    }
}

int delete_front (int q[],int *f,int *r)
{
    if(*f>*r)
        printf("queue underflow");
    else
    return q[*f++];
}

void display(int q[],int *f,int *r)
{
    int i;
    if(*f>*r)
    printf("queue is empty");
    else
    {
        for(i=*f;i<=*r;i++)
        printf("%d",q[i]);
    }
}
void main()
{
    int a;
    int choice;
   
    while (1)
    {   printf("\nEnter the choice:\n");
    scanf("%d",&choice);
      
        switch (choice)
    {
    case 1: printf("Enter the item to be inserted:\n");
            scanf("%d",&item);
            push (st,&top,item);
        break;
    case 2: a=pop(st,&top);
            printf("%d\n",a);
            printf("This item is removed\n");
            break;
    case 3: display(st,&top);
            break;            
    
    default: exit(0);
        break;
    }
        
    }
    
}