#include <stdio.h>

int main() {
    int M[2][3], N[3][2], Mult[2][2],i,j,k;

   
    printf("Digite os elementos da matriz M (2x3):\n");
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 3; j++) {
            printf("M[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }


    printf("Digite os elementos da matriz N (3x2):\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 2; j++) {
            printf("N[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &N[i][j]);
        }
    }

    
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
            Mult[i][j] = 0;
            for ( k = 0; k < 3; k++) {
                Mult[i][j] += M[i][k] * N[k][j];
            }
        }
    }

    
    printf("Resultado da multiplicação (Matriz Mult 2x2):\n");
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
            printf("%d\t", Mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}

