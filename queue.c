#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
int front=-1,queue[MAXSIZE],rear=-1;
int isempty()
{
 if(front==-1)
 return 1;
 else 
 return 0;
}
int isfull()
{
    if(rear==MAXSIZE-1)
    {
        return 1;
    }
    else
    return 0;
}
void enqueue()
{   int n;
    if(isfull())
    printf("error");
    else
    {
    printf("enter data to enque");
    scanf("%d",&n);
    if(front==-1)
    {
        front=0;
    }
    rear++;
    queue[rear]=n;
    printf("%d enqued \n",n);
    }
    
}
int dequeue()
{
    if(isempty())
    printf("error");
    else{
    int value;
	value=queue[front];
    front++;
    if (front > rear) {
        front = rear = -1;  // Reset both front and rear to -1 if the queue is empty
    }
    printf("%d dequeued\n", value);
    }
    return 0;
}
int peek()
{
    printf("%d",queue[front]);
    return 0;
}
int display()
{int i;
    if(isempty())
    printf("error");
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d",queue[i]);
        }
    }
}
int main()
{
    int ch,n;
    while(1){
        printf("Enter your choice:\n");
        printf("1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid choice");
        }
    }
}