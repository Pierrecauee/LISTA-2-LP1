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
	
	
	// Declare um array para manter o controle das ocorr�ncias de cada n�mero
    int ocorrencias[100]; // Supomos que os n�meros inseridos estejam no intervalo [0, 99]

    // Inicialize o array de ocorr�ncias com zeros
    for (i = 0; i < 100; i++) {
        ocorrencias[i] = 0;
    }

    // Conte as ocorr�ncias de cada n�mero na matriz
    for (i = 0; i < l; i++) {
        for ( j = 0; j < c ; j++) {
            int numero = matriz[i][j];
            ocorrencias[numero]++;
        }
    }

    // Imprima as ocorr�ncias dos n�meros
    for ( i = 0; i < 100; i++) {
        if (ocorrencias[i] > 0) {
            printf("O numero %d ocorre %d vezes na matriz.\n", i, ocorrencias[i]);
        }
    }
	return 0;
   
}

