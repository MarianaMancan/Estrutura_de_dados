//faça uma funçao recursiva para contar os digitos

#include <stdio.h>
#include <locale.h>

int num_digitos(int n1){
	static int cont =0;
	
   if(n1!=0){
   	cont++;
    num_digitos(n1/10);
   }
   return cont;
}

int main(){
	int num,contagem;
	setlocale(LC_ALL,"portuguese");
	printf("Programa para contar os digitos : \n");
	printf("Insira um numero: ");
	scanf("%d",&num);
	contagem = num_digitos(num);
	printf("\N a quantidade de digitos é %d \n \n",contagem);
	return 0;
	
}
