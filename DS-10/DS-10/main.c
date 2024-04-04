#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

int heap[SIZE];
int items = 0;

int swap(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
    
    return 0;
}

int insert(int what){
    
    int index = items +1;
    int parent = index/2;
    int tmp = 0;
    heap[items++] = what;
    
    if (index==1) {
        return 0;
    }
    
    while (parent > 0 && heap[parent] < heap[index-1]) {
        
        printf("index: %d parent:%d\n",index,parent);
        swap(&heap[parent], &heap[index-1]);
        index /= 2;
        parent /= 2;
        
    }
}

int delete(){

}

int heapify(){

}

int print_heap(){
    for (int i=0; i<items; ++i) {
        printf("%3d",heap[i]);
    }
    printf("\n");
    return 0;
}

int main(){
    insert(5);
    print_heap();
    insert(6);
    print_heap();
    insert(7);
    print_heap();
    insert(9);
    print_heap();

    return 0;
}
