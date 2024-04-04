#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node{
    int data;
    struct node *next;
};

struct node* top = NULL;

void push(int veri)
{
    struct node* eklenecek = (struct node*)malloc(sizeof(struct node));
    eklenecek->data = veri;
    eklenecek->next = NULL;
    if (top != NULL)
        eklenecek->next = top;
    top = eklenecek;
}

void pop()
{
    if(top->data == NULL){
        printf("stack zaten boş");
    }else{
        struct node* temp;
        temp = top;
        top = top->next;
        free(temp);
    }
}

int peek()
{
    return top->data;
}

void print()
{
    struct node* q;
    q= top;
    printf("\n");
    while (q != NULL) {
        printf(" %d =>", q->data);
        q = q->next;
    }
    printf("=>NULL");
}

int main() {
    
    int seçim;
    while (1==1)
    {
        printf("\n1- Push");
        printf("\n1- Pop");
        printf("\n1- Peek");
        printf("\nyapmak istediğiniz işlemi seçin");
        scanf("%d",&seçim);
        
        switch (seçim)
        {
            case 1:
                printf("Girmek istediğiniz sayı? ...");
                scanf("%d", &seçim);
                push(seçim);
                print();
                break;
            case 2:
                pop();
                print();
                break;
            case 3:
                printf("top elemanı => %d",peek());
                break;
        }
    }
    
    return 0;
}
