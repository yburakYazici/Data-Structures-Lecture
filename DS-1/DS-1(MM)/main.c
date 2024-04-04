#include <stdio.h>
#include <stdlib.h>

// int matrix[3][3] = { { 1,2,3},{4,5,6},{7,8,9} };
//
// int i,j;
//    printf("Enter elements of matrix:");
//     for (i=0; i<3; i++) {
//         for (j=0; j<3; j++) {
//             scanf("%d",&matrix[i][j]);
//        }
//     }
//     for (i=0; i<3; i++) {
//         for (j=0; j<3; j++) {
//             printf("%d ",matrix[i][j]);
//         }
//         printf("\n");
//     }

int main() {
    
    int matrix_a[3][3],matrix_b[3][3],matrix_c[3][3];
    int i,j;
    
       printf("Enter elements of matrix A:");
        for (i=0; i<3; i++)
            for (j=0; j<3; j++)
                scanf("%d",&matrix_a[i][j]);
                
    printf("Enter elements of matrix B:");
     for (i=0; i<3; i++)
         for (j=0; j<3; j++)
             scanf("%d",&matrix_b[i][j]);
        
    for (i=0; i<3; i++) {
            for (j=0; j<3; j++) {
matrix_c[i][j]= matrix_a[i][0]*matrix_b[0][j] + matrix_a[i][1]*matrix_b[1][j] + matrix_a[i][2]*matrix_b[2][j];
    printf("Multiplication of the two matrix :");
                for (i=0; i<3; i++) {
                    printf("\n");
                    for (j=0; j<3; j++) {
                        printf("%d ",matrix_c[i][j]);
                    }
                }
            }
        }
    return 0;
}
