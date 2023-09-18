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
	
	int menor = matriz[0][0];
	
	for(i = 0; i < l; i++){ // percorre as linhaas
		for(j = 0; j < c; j++){ //percorre as colunas
			if(matriz[i][j] < menor){ // verifica as posicoes e recebe conforme o tamanho dos numeros 
				menor = matriz[i][j];//armazena
			}
		}
	}
  	
	  
	  printf("\nO menor numero inserido na matriz eh: %d\n",menor);	//exibe o maior numero
	
	
	
}

