#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int* ptr;
    int a, i;

    printf("Enter number of elements:");
    scanf("%d",&a);
    
    printf("Entered number of elements: %d\n",a);

    ptr=(int*)malloc(a * sizeof(int));
    
    if (ptr == 0) {
        printf("Memory not allocated.\n");
        exit(0);
    } else {
        printf("Memory successfully allocated using malloc.\n");
        for (i=0; i<a; ++i) {
            ptr[i]= i+1;
        }
        printf("The elements of the array are: ");
        for (i=0; i<a; ++i) {
            printf("%d, ", ptr[i]);
        }
    }

    return 0;
}
