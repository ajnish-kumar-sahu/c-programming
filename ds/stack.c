#include<stdio.h>
#include<stdlib.h>

#define MAX 10

struct stack {
    int ST[MAX];
    int top;
};
typedef struct stack Stack;

void push(Stack *);
void pop(Stack *);
void display(Stack *);
void search(Stack *);

void printHeader() {
    printf("\n=================================");
    printf("\n         STACK OPERATIONS        ");
    printf("\n=================================\n");
}

void printMenu() {
    printf("\n--------------- MENU --------------");
    printf("\n [1] Push Element");
    printf("\n [2] Pop Element");
    printf("\n [3] Display Stack");
    printf("\n [4] Search Element");
    printf("\n [5] Exit");
    printf("\n---------------------------------\n");
}

int main() {
    int choice;
    char cont;
    Stack s;
    s.top = -1;

    do {
        system("cls");  // For Windows (use "clear" for Unix)
        printHeader();
        printMenu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: push(&s); break;
            case 2: pop(&s); break;
            case 3: display(&s); break;
            case 4: search(&s); break;
            case 5: exit(0);
            default: printf("\nInvalid choice!");
        }
        printf("\nContinue? (y/n): ");
        fflush(stdin);
        scanf(" %c", &cont);
    } while(cont == 'y' || cont == 'Y');
    return 0;
}

void push(Stack *p) {
    if (p->top == MAX-1) {
        printf("\nStack Overflow!\n");
        return;
    }
    p->top++;
    printf("\nEnter element: ");
    scanf("%d", &p->ST[p->top]);
    printf("Element added successfully!\n");
}

void pop(Stack *p) {
    if (p->top == -1) {
        printf("\nStack Underflow!\n");
        return;
    }
    printf("\nPopped element: %d\n", p->ST[p->top]);
    p->top--;
}

void display(Stack *p) {
    if (p->top == -1) {
        printf("\nStack is empty\n");
        return;
    }
    
    printf("\n----- Stack Contents -----\n");
    printf("Top -> %d\n", p->top);
    printf("------------------------\n");
    for(int i = p->top; i >= 0; i--) {
        printf("| %d ", p->ST[i]);
        if(i == p->top) printf("<- Top");
        printf("\n");
    }
    printf("------------------------\n");
}

void search(Stack *p) {
    if (p->top == -1) {
        printf("\nStack is empty\n");
        return;
    }

    int item;
    printf("\nEnter element to search: ");
    scanf("%d", &item);

    for(int i = p->top; i >= 0; i--) {
        if(item == p->ST[i]) {
            printf("Element found at position %d\n", p->top - i + 1);
            return;
        }
    }
    printf("Element not found!\n");
}





