// 1-push operation
// 2-pop operation
// 3-display operation
// 4-search operation
// 5-exit operation
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h> // Include for color functionality
#define MAX 10       // Define the maximum size of the queue

int Q[MAX]; // Array to store queue elements
int f = -1; // Front pointer
int r = -1; // Rear pointer

// Function declarations
void push();              // Adds an element to the queue
void pop();               // Removes an element from the queue
void display();           // Displays all elements in the queue
void search();            // Searches for an element in the queue
void setColor(int color); // Sets the text color

void setColor(int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void main()
{
    int c, ch;
    do
    {
        system("cls"); // Clear the console screen
        setColor(11);  // Set text color to light cyan
        printf("\n=========================");
        printf("\n        QUEUE MENU       ");
        printf("\n=========================");
        setColor(15);        // Set text color to white
        printf("\n1. Push"); // Menu options
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Search");
        printf("\n5. Exit");
        setColor(11); // Set text color to light cyan
        printf("\n=========================");
        setColor(15); // Set text color to white
        printf("\nEnter your choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            push(); // Add operation
            break;
        case 2:
            pop(); // Remove operation
            break;
        case 3:
            display(); // Display operation
            break;
        case 4:
            search(); // Item search operation
            break;
        case 5:
            exit(0); // Exit the program
        default:
            setColor(12);             // Set text color to red
            printf("\nWrong choice"); // Invalid input
            setColor(15);             // Reset text color to white
        }
        printf("\nDo you want to continue (Y/N): ");
        while ((getchar()) != '\n')
            ; // Clear input buffer
        scanf("%c", &ch);
    } while (ch == 'y' || ch == 'Y'); // Continue if user inputs 'Y' or 'y'
    getch(); // Wait for user input before exiting
}

void push()
{
    if (r == MAX - 1) // Check if the queue is full
    {
        setColor(12);                // Set text color to red
        printf("\nQueue Overflow!"); // Queue is full
        setColor(15);                // Reset text color to white
        getch();
    }
    else
    {
        if (f == -1) // Initialize front pointer if queue is empty
            f = 0;
        r = r + 1; // Increment rear pointer
        printf("Enter an element: ");
        scanf("%d", &Q[r]); // Add element to the queue
        setColor(10);       // Set text color to green
        printf("\nElement added successfully!");
        setColor(15); // Reset text color to white
    }
}

void pop()
{
    if (f == -1) // Check if the queue is empty
    {
        setColor(12);                 // Set text color to red
        printf("\nQueue Underflow!"); // Queue is empty
        setColor(15);                 // Reset text color to white
        getch();
    }
    else
    {
        setColor(14);                          // Set text color to yellow
        printf("\nDeleted element: %d", Q[f]); // Remove the front element
        setColor(15);                          // Reset text color to white
        f = f + 1;                             // Increment front pointer
        if (f > r)                             // Reset pointers if queue becomes empty
        {
            f = -1;
            r = -1;
        }
    }
}

void display()
{
    int i;
    if (f == -1) // Check if the queue is empty
    {
        setColor(12);            // Set text color to red
        printf("\nEmpty queue"); // Queue is empty
        setColor(15);            // Reset text color to white
        getch();
    }
    else
    {
        setColor(11); // Set text color to light cyan
        printf("\n+-------+-------+");
        printf("\n| Index | Value |");
        printf("\n+-------+-------+");
        setColor(15); // Reset text color to white

        for (i = f; i <= r; i++) // Traverse the queue
        {
            printf("\n|   %2d  |   %2d  |", i, Q[i]); // Print index and value
        }

        setColor(11); // Set text color to light cyan
        printf("\n+-------+-------+");
        setColor(15); // Reset text color to white
    }
}

void search()
{
    int i, flag = 0, item;
    if (f == -1) // Check if the queue is empty
    {
        setColor(12);            // Set text color to red
        printf("\nEmpty queue"); // Queue is empty
        setColor(15);            // Reset text color to white
        getch();
    }
    else
    {
        i = f; // Start from the front pointer
        printf("Enter an item for searching: ");
        scanf("%d", &item); // Input the item to search
        while (i <= r)      // Traverse the queue
        {
            if (item == Q[i]) // Check if the item exists
            {
                flag = 1; // Item found
                break;
            }
            i++;
        }
        if (flag == 0)
        {
            setColor(12);                    // Set text color to red
            printf("\nItem does not exist"); // Item not found
            setColor(15);                    // Reset text color to white
        }
        else
        {
            setColor(10);            // Set text color to green
            printf("\nItem exists"); // Item found
            setColor(15);            // Reset text color to white
        }
    }
}