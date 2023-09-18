#include <stdio.h>

int main() {
    int n, m; 
    float matriz[100][100]; 
    float escalar;
    int i, j; 

    // Solicitar ao usuário o número de linhas e colunas da matriz
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &n);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &m);

    // Preencher a matriz
    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    // Solicitar o valor do escalar
    printf("Digite o valor do escalar: ");
    scanf("%f", &escalar);

    // Multiplicar a matriz pelo escalar
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            matriz[i][j] *= escalar;
        }
    }

    // Imprimir a matriz resultante
    printf("Matriz resultante:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

