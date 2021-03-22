
#include <stdio.h>
int stack[10];
int topOfStack = 0;

int push(int value){

    if (topOfStack < 10){
        int *p = &stack[topOfStack];
        *p = value;
        topOfStack += 1;
        return 0;
    } else {
        return 1;
    }

}

int pop(int *value){
    if (topOfStack > 0){
        *value = stack[topOfStack - 1];
        topOfStack -=1;
        return 0;
    } else {
        return 1;
    }
}

void printStack(int setting){
    if (setting == 0){
        int i;
        for(i = 0; i < topOfStack; i = i + 1){
            printf(" %d", stack[i]);
        }
    } else if (setting == 1) {
        int i;
        for (i = 0; i < topOfStack; i = i + 1) {
            printf(" %x", stack[i]);
        }
    } else if (setting == 2) {
        int i;
        for (i = 0; i < topOfStack; i = i + 1) {
            printf(" %c", stack[i]);
        }
    }


}