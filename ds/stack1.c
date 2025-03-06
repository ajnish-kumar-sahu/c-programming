#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX 10

// ANSI Color Codes
#define COLOR_RESET   "\033[0m"
#define COLOR_RED     "\033[1;31m"
#define COLOR_GREEN   "\033[1;32m"
#define COLOR_YELLOW  "\033[1;33m"
#define COLOR_BLUE    "\033[1;34m"
#define COLOR_MAGENTA "\033[1;35m"
#define COLOR_CYAN    "\033[1;36m"
#define COLOR_WHITE   "\033[1;37m"

struct stack {
    int ST[MAX];
    int top;
};
typedef struct stack Stack;

void push(Stack *);
void pop(Stack *);
void display(Stack *);
void search(Stack *);
void clearInputBuffer();
void peek(Stack *);
bool isEmpty(Stack *);
bool isFull(Stack *);

void printHeader() {
    printf("\n%s==================================%s", COLOR_CYAN, COLOR_RESET);
    printf("\n%s         STACK OPERATIONS        %s", COLOR_CYAN, COLOR_RESET);
    printf("\n%s==================================%s\n", COLOR_CYAN, COLOR_RESET);
}

void printMenu() {
    printf("\n%s--------------- MENU ---------------%s", COLOR_YELLOW, COLOR_RESET);
    printf("\n %s[1]%s Push Element", COLOR_GREEN, COLOR_RESET);
    printf("\n %s[2]%s Pop Element", COLOR_GREEN, COLOR_RESET);
    printf("\n %s[3]%s Display Stack", COLOR_GREEN, COLOR_RESET);
    printf("\n %s[4]%s Search Element", COLOR_GREEN, COLOR_RESET);
    printf("\n %s[5]%s Peek Top Element", COLOR_GREEN, COLOR_RESET);
    printf("\n %s[6]%s Exit", COLOR_RED, COLOR_RESET);
    printf("\n%s-----------------------------------%s\n", COLOR_YELLOW, COLOR_RESET);
}

void printStackInfo(Stack *p) {
    printf("\n%sStack Status:%s %d/%d elements", COLOR_BLUE, COLOR_RESET, p->top + 1, MAX);
    printf("  (%s%.1f%% full%s)\n", 
        (p->top + 1) > MAX * 0.8 ? COLOR_RED : COLOR_GREEN, 
        (float)(p->top + 1) / MAX * 100, 
        COLOR_RESET);
}

bool isEmpty(Stack *p) {
    return p->top == -1;
}

bool isFull(Stack *p) {
    return p->top == MAX-1;
}

void peek(Stack *p) {
    if (isEmpty(p)) {
        printf("\n%sStack is empty. No element to peek.%s\n", COLOR_RED, COLOR_RESET);
        return;
    }
    printf("\n%sTop element: %d%s\n", COLOR_YELLOW, p->ST[p->top], COLOR_RESET);
}

int main() {
    int choice;
    char cont;
    Stack s;
    s.top = -1;
    bool validChoice = true;

    do {
        #ifdef _WIN32
            system("cls");  // For Windows
        #else
            system("clear"); // For Unix/Linux
        #endif

        printHeader();
        if (!validChoice) {
            printf("%sInvalid choice! Please try again.%s\n", COLOR_RED, COLOR_RESET);
            validChoice = true;
        }
        
        printStackInfo(&s);
        printMenu();
        
        printf("\nEnter your choice: ");
        if (scanf("%d", &choice) != 1) {
            clearInputBuffer();
            validChoice = false;
            continue;
        }

        switch(choice) {
            case 1: push(&s); break;
            case 2: pop(&s); break;
            case 3: display(&s); break;
            case 4: search(&s); break;
            case 5: peek(&s); break;
            case 6: 
                printf("\n%sExiting program. Goodbye!%s\n", COLOR_MAGENTA, COLOR_RESET);
                exit(0);
            default: 
                validChoice = false;
                clearInputBuffer();
                continue;
        }
        
        printf("\n%sContinue? (y/n):%s ", COLOR_CYAN, COLOR_RESET);
        clearInputBuffer();
        scanf(" %c", &cont);
        
    } while(cont == 'y' || cont == 'Y');
    
    printf("\n%sExiting program. Goodbye!%s\n", COLOR_MAGENTA, COLOR_RESET);
    return 0;
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void push(Stack *p) {
    if (isFull(p)) {
        printf("\n%sStack Overflow! Cannot push more elements.%s\n", COLOR_RED, COLOR_RESET);
        return;
    }
    
    int element;
    printf("\n%sEnter element to push:%s ", COLOR_CYAN, COLOR_RESET);
    if (scanf("%d", &element) != 1) {
        printf("%sInvalid input. Please enter an integer.%s\n", COLOR_RED, COLOR_RESET);
        clearInputBuffer();
        return;
    }
    
    p->top++;
    p->ST[p->top] = element;
    printf("%sElement %d pushed successfully!%s\n", COLOR_GREEN, element, COLOR_RESET);
}

void pop(Stack *p) {
    if (isEmpty(p)) {
        printf("\n%sStack Underflow! Cannot pop from an empty stack.%s\n", COLOR_RED, COLOR_RESET);
        return;
    }
    
    printf("\n%sPopped element: %d%s\n", COLOR_YELLOW, p->ST[p->top], COLOR_RESET);
    p->top--;
}

void display(Stack *p) {
    if (p->top == -1) {
        printf("\n%sStack is empty. Nothing to display.%s\n", COLOR_YELLOW, COLOR_RESET);
        return;
    }
    
    printf("\n%s===== Stack Contents =====%s\n", COLOR_BLUE, COLOR_RESET);
    printf("%sCapacity: %d | Elements: %d%s\n", COLOR_CYAN, MAX, p->top + 1, COLOR_RESET);
    printf("%s+----------------------+%s\n", COLOR_BLUE, COLOR_RESET);
    
    for(int i = p->top; i >= 0; i--) {
        printf("%s|%s ", COLOR_BLUE, COLOR_RESET);
        
        if(i == p->top) {
            printf("%s%d%s", COLOR_YELLOW, p->ST[i], COLOR_RESET);
            printf("%s <-- TOP%s", COLOR_MAGENTA, COLOR_RESET);
        } else {
            printf("%s%d%s", COLOR_WHITE, p->ST[i], COLOR_RESET);
        }
        
        // Calculate padding for alignment
        int padding = 14 - (p->ST[i] > 9999 ? 5 : p->ST[i] > 999 ? 4 : p->ST[i] > 99 ? 3 : p->ST[i] > 9 ? 2 : 1);
        for (int j = 0; j < padding; j++) {
            printf(" ");
        }
        
        printf("%s|%s\n", COLOR_BLUE, COLOR_RESET);
    }
    
    printf("%s+----------------------+%s\n", COLOR_BLUE, COLOR_RESET);
}

void search(Stack *p) {
    if (p->top == -1) {
        printf("\n%sStack is empty. Nothing to search.%s\n", COLOR_YELLOW, COLOR_RESET);
        return;
    }

    int item;
    printf("\n%sEnter element to search:%s ", COLOR_CYAN, COLOR_RESET);
    if (scanf("%d", &item) != 1) {
        printf("%sInvalid input. Please enter an integer.%s\n", COLOR_RED, COLOR_RESET);
        clearInputBuffer();
        return;
    }

    bool found = false;
    for(int i = p->top; i >= 0; i--) {
        if(item == p->ST[i]) {
            printf("%sElement found at position %d from top%s\n", COLOR_GREEN, p->top - i + 1, COLOR_RESET);
            printf("%sElement found at index %d in the array%s\n", COLOR_GREEN, i, COLOR_RESET);
            found = true;
            break;
        }
    }
    
    if (!found) {
        printf("%sElement %d not found in the stack!%s\n", COLOR_RED, item, COLOR_RESET);
    }
}