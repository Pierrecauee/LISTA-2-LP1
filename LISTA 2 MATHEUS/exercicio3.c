#include<stdio.h>
#include<stdlib.h>

int main(){
  int l, c, j, i;
	
	printf("Digite o numero de linhas da matriz: \n");
	scanf("%d",&l);
	
	printf("Digite o numero de colunas da matriz: \n");
	scanf("%d",&c);
	
	int matriz [l][c];
	
	for(i = 0; i < l; i++){ //recebe as posicoes
	   for(j = 0; j < c; j++){
	   		printf("digite o valor da posicao %d%d:", i , j );
	   		scanf("%d",&matriz[i][j]);			
		}
	}
	
	
	// Declare um array para manter o controle das ocorrências de cada número
    int ocorrencias[100]; // Supomos que os números inseridos estejam no intervalo [0, 99]

    // Inicialize o array de ocorrências com zeros
    for (i = 0; i < 100; i++) {
        ocorrencias[i] = 0;
    }

    // Conte as ocorrências de cada número na matriz
    for (i = 0; i < l; i++) {
        for ( j = 0; j < c ; j++) {
            int numero = matriz[i][j];
            ocorrencias[numero]++;
        }
    }

    // Imprima as ocorrências dos números
    for ( i = 0; i < 100; i++) {
        if (ocorrencias[i] > 0) {
            printf("O numero %d ocorre %d vezes na matriz.\n", i, ocorrencias[i]);
        }
    }
	return 0;
   
}

