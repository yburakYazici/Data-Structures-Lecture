#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int stack[256];
int count = 0;

void push(int x){
    if (count == 256) {
        fprintf(stderr, "There is no space in the stack\n");
        return;
    }
    stack[count] = x;
    count++;
}
int pop(){
    if (count==0) {
        fprintf(stderr, "Nothing to take from stack\n");
        return -1;
    }
    int res = stack[count-1];
    count--;
    return res;
}

int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    int i;
    for (i=0; i<5; i++) {
        printf("%d ",pop());
    }
    
    return 0;
}
