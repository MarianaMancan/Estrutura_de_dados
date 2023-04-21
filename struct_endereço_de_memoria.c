#include <stdio.h>
#define alturaMaxima 225
typedef struct{
	int peso;
	int altura;
	
}PesoAltura;
int main(){
	int x;
	PesoAltura pessoa1;
	pessoa1.peso = 80;
	pessoa1.altura=185;
	printf("Peso: %i, altura: %i",pessoa1.peso,pessoa1.altura);
	if(pessoa1.altura>alturaMaxima){
		printf("ALTURA ACIMA DA MAXIMA\n");
	}
	else{
		printf("ALTURA ABAIXO DA MAXIMA\n");
		printf("%p %p %p\n",&x,&pessoa1,(&pessoa1.altura));//mostra o endereço de memoria
		
	}
	return 0;
}
