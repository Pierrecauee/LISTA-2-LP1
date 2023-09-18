#include <stdio.h>

int main() {
    int n, m;
    char menu;
    float matriz1[100][100], matriz2[100][100], resultado[100][100];
    float constante;

    printf("Digite o numero de linhas das matrizes: ");
    scanf("%d", &n);

    printf("Digite o numero de colunas das matrizes: ");
    scanf("%d", &m);
int i,j;
    printf("Para a primeira matriz:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            printf("Digite o elemento da primeira matriz na posicao (%d, %d): ", i + 1, j + 1);
            scanf("%f", &matriz1[i][j]);
        }
    }

    printf("Para a segunda matriz:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            printf("Digite o elemento da segunda matriz na posicao (%d, %d): ", i + 1, j + 1);
            scanf("%f", &matriz2[i][j]);
        }
    }

    printf("\n");

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\nMENU DE OPCOES\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("(a) somar as duas matrizes\n(b) subtrair a primeira matriz da segunda\n(c) adicionar uma constante às duas matrizes\n(d) imprimir as matrizes\n");
    scanf(" %c", &menu); // Use %c para ler um caractere

    if (menu == 'a') {
        // Soma as duas matrizes
        for ( i = 0; i < n; i++) {
            for ( j = 0; j < m; j++) {
                resultado[i][j] = matriz1[i][j] + matriz2[i][j];
            }
        }
        printf("Resultado da soma:\n");
    } else if (menu == 'b') {
        // Subtrai a primeira matriz da segunda
        for ( i = 0; i < n; i++) {
            for ( j = 0; j < m; j++) {
                resultado[i][j] = matriz1[i][j] - matriz2[i][j];
            }
        }
        printf("Resultado da subtracao:\n");
    } else if (menu == 'c') {
        // Adiciona uma constante às duas matrizes
        printf("Digite a constante: ");
        scanf("%f", &constante);
        for ( i = 0; i < n; i++) {
            for ( j = 0; j < m; j++) {
                matriz1[i][j] += constante;
                matriz2[i][j] += constante;
            }
        }
        printf("Matrizes com a constante adicionada:\n");
    } else if (menu == 'd') {
        // Imprime as matrizes
        printf("Matriz 1:\n");
        for ( i = 0; i < n; i++) {
            for ( j = 0; j < m; j++) {
                printf("%.2f\t", matriz1[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        printf("Matriz 2:\n");
        for ( i = 0; i < n; i++) {
            for ( j = 0; j < m; j++) {
                printf("%.2f\t", matriz2[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Opção inválida.\n");
        return 1;
    }

    if (menu == 'a' || menu == 'b' || menu == 'c') {
        // Imprime o resultado da operação escolhida
        for ( i = 0; i < n; i++) {
            for ( j = 0; j < m; j++) {
                printf("%.2f\t", resultado[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

