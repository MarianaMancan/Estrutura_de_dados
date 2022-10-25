//faça uma funçao recursiva para calcular todos os numeros de 1 até n

#include <stdio.h>
#include <locale.h>

int soma_num(int num){
	int resultado;
	
	if(num == 1){
		return 1;
	}
	else {
		resultado = num + soma_num(num-1);
	}
	return(resultado);
}

int main(){
	int num_N;
	int somatoria;
	setlocale(LC_ALL,"portuguese");
	printf("Progama para calcular a somatoria dos numeros de 1 a N : \n");
	printf("Digite um número: ");
	scanf("%d",&num_N);
	somatoria = soma_num(num_N);
	printf("O somatorio dos numeros de 1 a %d é %d ",num_N,somatoria);
	
	return 0;
}
