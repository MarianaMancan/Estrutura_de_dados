#include <stdio.h>

int main(){
int x = 25;
int * y = &x;
*y = 30;
printf("O valor atual de x: %i\n",x);
printf("Alocação de memoria de x: %p \n",y);
	return 0;
}


//asterisco (*) após a palavra int indica que estamos falando de um endereço para inteiro e não mais de um inteiro
//A variável x é inicializada com valor 25

//variável y recebe o endereço onde está a variável x

//Coloca-se o valor 30 na posição de memória referenciada (apontado) pelo endereço armazenado em y
