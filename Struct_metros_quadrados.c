#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
typedef struct{
	float largura;
	float comprimento;
}Medida;
typedef struct{
	 float cozinha;
	 float quarto;
	 float sala;
	 float lavanderia;
}Comodo;
//void metros_quadrados(char largura,char comprimento){

 float metros_quadrados(){
 	float x;
 	Medida medida;
	printf("Qual é a largura: ");
	scanf("%f",&medida.largura);
	printf("Qual é o comprimento:");
    scanf("%f",&medida.comprimento);
	x = medida.largura * medida.comprimento;
	printf("O valor aproximado é %f M",x);
 }
	
main(){
	setlocale(LC_ALL, "PORTUGUESE");
    metros_quadrados();
    
}
