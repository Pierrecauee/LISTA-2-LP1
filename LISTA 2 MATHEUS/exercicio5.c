#include <stdio.h>

int main() {
    int l, c;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &l);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &c);

    if (l < 0 || l > 100 || c < 0 || c > 100) {
        printf("O número digitado não está dentro do intervalo desejado (1-100).\n");
        return 1; // Saída do programa com código de erro
    }

    int matriz[l][c];

    for(int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("Digite o elemento da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("A diagonal secundária é:\n");

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            if (i + j == l - 1) {
                printf("%d ", matriz[i][j]);
            } else {
                printf("  "); // Espaço em branco para não imprimir elementos fora da diagonal secundária
            }
        }
    }

    printf("\n");

    return 0;
}

