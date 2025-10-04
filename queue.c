// ROLL NUMBER : 167 - B - CT
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int queue[SIZE];
int front = -1;
int rear = -1;
void enqueue(int data)
{
    if (rear == SIZE - 1)
    {
        printf("queue is full \n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        queue[++rear] = data;
        printf("%d is added at %d \n", data, rear);
    }
}
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is Empty \n");
    }
    else
    {
        printf("%d is removed \n", queue[front]);
        front++;
    }
}
void display()
{
    if (front == -1)
    {
        printf("queue is empty \n");
    }
    else
    {
        printf("queue elements :\n");
        for (int i = front; i <= rear; i++)
        {
            printf("--%d(%d)--", queue[i], i);
        }
        printf("\n");
    }
}
int main()
{
    int choice, data;
    
    while (1)
    {
        printf("\n===== QUEUE OPERATIONS MENU =====\n");
        printf("1. Enqueue (Add element)\n");
        printf("2. Dequeue (Remove element)\n");
        printf("3. Display queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
                printf("Enter element to enqueue: ");
                scanf("%d", &data);
                enqueue(data);
                break;
                
            case 2:
                dequeue();
                break;
                
            case 3:
                display();
                break;
                
            case 4:
                printf("Exiting program...\n");
                exit(0);
                break;
                
            default:
                printf("Invalid choice! Please enter 1-4.\n");
                break;
        }
    }
    
    return 0;
}