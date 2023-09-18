#include <stdio.h>

int main() {
    int l, c;

    printf("Digite o n�mero de linhas da matriz: ");
    scanf("%d", &l);

    printf("Digite o n�mero de colunas da matriz: ");
    scanf("%d", &c);

    if (l < 0 || l > 100 || c < 0 || c > 100) {
        printf("O n�mero digitado n�o est� dentro do intervalo desejado (1-100).\n");
        return 1; // Sa�da do programa com c�digo de erro
    }

    int matriz[l][c];

    for(int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("Digite o elemento da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("A diagonal secund�ria �:\n");

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            if (i + j == l - 1) {
                printf("%d ", matriz[i][j]);
            } else {
                printf("  "); // Espa�o em branco para n�o imprimir elementos fora da diagonal secund�ria
            }
        }
    }

    printf("\n");

    return 0;
}

