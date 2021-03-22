
#include <stdio.h>
#include <string.h>
#include "stack.h"
int main() {
    int exit;
    int mode;
    mode = 0;
    exit = 0;
    printf("Welcome to the stack program.");


    while (exit == 0){
        char input;
        printf("\n");
        printf("\n");
        printf("Enter option: ");
        scanf(" %c", &input);


        if (input == 'x'){
            printf("Goodbye!");
            exit = 1;
        }
        else if(input == 'u'){
            int result;
            int stackInput;
            printf("What number? ");
            scanf(" %d", &stackInput);
            result = push(stackInput);
            if (result == 1){
                printf("Overflow!!!\n");
                printf("Stack:");
                printStack(mode);
            } else {
                printf("Stack:");
                printStack(mode);
            }

        }
        else if(input == 'o'){
            int num;
            int *p = &num;
            int result = pop(p);
            if (result == 1){
                printf("Underflow!!!");
                printf("\n");
                printf("Stack:");
            } else {
                printf("Popped ");
                printf("%d", num);
                printf("\n");
                printf("Stack:");
                printStack(mode);
            }

        }
        if (input == 'd'){
            printf("Stack:");
            mode = 0;
            printStack(mode);
        }
        if (input == 'h'){
            printf("Stack:");
            mode = 1;
            printStack(mode);
        }
        if (input == 'c'){
            printf("Stack:");
            mode = 2;
            printStack(mode);
        }


    }





    return 0;
}