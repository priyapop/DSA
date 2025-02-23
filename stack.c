#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
int top=-1,stack[MAXSIZE];
int isFull(){
    if(top==MAXSIZE-1)
        return 1;
    else
        return 0;
}
int isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;
}
void menu(){
    printf("\n\tMenu\n");

    printf("1.Create empty stack\n2.Push\n3.Pop\n4.Display\n5.Peek\n6.Exits\n");
}
void create(){
	top=-1;
    printf("Empty stack created\n");
}
void push(){
    if(isFull())
        printf("Stack is full");
    else{
    	int n;
    	printf("Enter value to to pushed\n");
        scanf("%d",&n);
        top++;
        stack[top]=n;
        printf("Pushed %d to stack\n", n);
    }
}
void pop(){
    if(isEmpty())
        printf("Stack is empty");
    else{
        int n=stack[top];
        top--;
        printf("Popped %d from stack\n", n);
    }
}
void display(){
    int i;
    if(isEmpty())
        printf("Stack is empty");
    else{
        printf("Values of stack are\n");
        for(i=top;i>=0;i--)
            printf("%d\n",stack[i]);
    }
}
void peek(){
    if(isEmpty())
        printf("Stack is empty");
    else{
        printf("Top value of stack = %d",stack[top]);
    }
}
void main(){
    int ch,n;
    while(1){
        menu();
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                create();
                break;
            case 2:
                push();
                break;
            case 3:
                pop();
                break;
            case 4:
                display();
                break;
            case 5:
                peek();
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Invalid choice");
        }
    }
}