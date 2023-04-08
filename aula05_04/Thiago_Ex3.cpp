#include <stdio.h>

int main(){
	
	int carrinho_aberto, carrinho_retirando, sn, desistir, consistencia,deseja = 1;
	
	do{
		printf("Quantos filmes voce deseja adicionar");
		scanf("%d", &carrinho_aberto);
		
		printf("Deseja remover algum filme (1-SIM / 2-NAO)");
		scanf("%d", &sn);
		if(sn==1){
			printf("\nquantos filmes deseja remover?");
			scanf("%d", &carrinho_retirando);
			
			carrinho_aberto = carrinho_aberto - carrinho_retirando;
		}
		
		printf("\nquer desistir do seu carrinho? (1-SIM / 2-NAO)");
		scanf("%d", &desistir);
		
		if(desistir == 1){
			printf("Cancelado");
			break; 
			
		}else {
			printf("\ncarrinho fechado");
			printf("\na consistencia esta ok?(1-SIM / 2-NAO)");
			scanf("%d", &consistencia);
			if(consistencia == 2){
				printf("\ndesistencia");
				break;
			} else {
				printf("\nfechamento");
			}
			
		}
		printf("\ndeseja continuar (1-SIM / 2-NAO)");
		scanf("%d", &deseja);
	}while (deseja == 1);
	
	
	
}
