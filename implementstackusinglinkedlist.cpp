
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>     // For INT_MIN

#define CAPACITY 10000  // Stack maximum capacity

// Define stack node structure
struct stack
{
    int data;
    struct stack *next;
} *top;

// Stack size
int size = 0;



/* Function declaration to perform push and pop on stack */
void push(int element);
int  pop();


int main()
{
    int choice, data;

    while(1)
    {
        /* Menu */
        printf("------------------------------------\n");
        printf("    STACK IMPLEMENTATION PROGRAM    \n");
        printf("------------------------------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Size\n");
        printf("4. Exit\n");
        printf("------------------------------------\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter data to push into stack: ");
                scanf("%d", &data);

                // Push element to stack
                push(data);
                break;

            case 2:
                data = pop();

                // If stack is not empty
                if (data != INT_MIN)
                    printf("Data => %d\n", data);
                break;

            case 3:
                printf("Stack size: %d\n", size);
                break;

            case 4:
                printf("Exiting from app.\n");
                exit(0);
                break;

            default:
                printf("Invalid choice, please try again.\n");
        }

        printf("\n\n");
    }


    return 0;
}
