#include <stdio.h>

int main() {
    int linhas, colunas;

   
    printf("Digite o n�mero de linhas da primeira matriz: ");
    scanf("%d", &linhas);                                        // Entrada da ordem da primeira matriz
                                                                      
    printf("Digite o n�mero de colunas da primeira matriz: ");
    scanf("%d", &colunas);

    // Verifique se a ordem da primeira matriz est� dentro do intervalo desejado
    if (linhas <= 0 || linhas > 100 || colunas <= 0 || colunas > 100) {
        printf("A ordem da primeira matriz n�o est� dentro do intervalo desejado (1-100).\n");//se esta dentro do desejado
        return 1; 
    }

    int matriz1[linhas][colunas];

    // Entrada dos elementos da primeira matriz
    printf("Digite os elementos da primeira matriz:\n");
   int i,j;
    for( i = 0; i < linhas; i++) { //recolhe os elementos das matrizes
        for ( j = 0; j < colunas; j++) {
            printf("Elemento (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Entrada da ordem da segunda matriz
    int linhas2, colunas2;

    printf("Digite o n�mero de linhas da segunda matriz: ");
    scanf("%d", &linhas2);

    printf("Digite o n�mero de colunas da segunda matriz: ");
    scanf("%d", &colunas2);

    // Verifique se a ordem da segunda matriz est� dentro do intervalo desejado
    if (linhas2 <= 0 || linhas2 > 100 || colunas2 <= 0 || colunas2 > 100) {
        printf("A ordem da segunda matriz n�o est� dentro do intervalo desejado (1-100).\n");//mesma coisa do primeiro ver se esta entre 100
        return 1; // Sa�da do programa com c�digo de erro
    }

    // Verifique se as matrizes t�m a mesma ordem
    if (linhas != linhas2 || colunas != colunas2) {
        printf("As matrizes n�o t�m a mesma ordem e n�o podem ser somadas.\n");
        return 1; // Sa�da do programa com c�digo de erro
    }

    int matriz2[linhas2][colunas2];

    // Entrada dos elementos da segunda matriz
    printf("Digite os elementos da segunda matriz:\n");
    for (int i = 0; i < linhas2; i++){
        for (int j = 0; j < colunas2; j++) {
            printf("Elemento (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Soma das matrizes
    int resultado[linhas][colunas];

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Exibi��o da matriz resultante (soma)
    printf("A matriz resultante (soma) �:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}

