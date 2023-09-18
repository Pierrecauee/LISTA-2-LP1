#include<stdio.h>

	int main(){
	int l,c;
	
	printf("digite o numero de linhas da matriz: ");
	scanf("%d",&l);
	
	printf("Digite o numero de colunas da sua matriz: ");
	scanf("%d",&c);
	
	  if(l < 0 || l > 100 || c < 0 || c > 100){  //aqui ele separa se o numero for maior que 100 ou menor que 0 ele exibe a mensagem
	  printf("o numero digitado nao esta dentro do desejado");
	  }	
	  
	  int i,j,matriz[l][c];
	  for(i = 0;i < l;i++){
	  	for(j= 0;j < c;j++){
	  		printf("elemento linha: %d  coluna: %d ",i + 1,j + 1); //pede os elmentos da linha
	  		scanf("%d",&matriz[l][c]);
		  }
	  }
	  printf("A diagonal principal eh \n");
	  
	  for (i = 0; i < l && i < c; i++) {
        printf("%d ", matriz[i][i]);
    }

	  
   }
