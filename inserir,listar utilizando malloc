/* Insira um novo restaurante na lista e o seu respectivo endereço;
## Adicione uma nota para a cozinha do restaurante (0 a 5, sendo 0 - Horrível; 1 -  Ruim; 2 - Razoável; 3 - Bom; 4 - Muito bom; 5 - Excelente/ Espetacular);
## Acrescente ao restaurante, além da nota da cozinha, o tipo de comida que é oferecida (brasileira, chinesa, francesa, italiana, japonesa etc);
##  Liste todos os restaurantes cadastrados para exibir as informações.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

//Estrutura para o cadastro de rstaurantes
typedef struct restaurantes{
    char restaurant_name[50];
    char adress_restaurant[150];
    char type_food[50];
    int note_food;
    struct restaurantes *next;
}food_attributes;

//Função para inserir um novo restaurante
void insert_restaurant(food_attributes ** head){
    //limpar console
    system("cls");
    int avaliation, cousine;
    food_attributes *new_restaurant = (food_attributes*) malloc(sizeof(food_attributes));
    printf("\nDigite o nome do restaurante: ");
    fflush(stdin);
    fgets(new_restaurant->restaurant_name, 50, stdin);
    printf("\nDigite a localização do restaurante:  ");
    fflush(stdin);
    fgets(new_restaurant->adress_restaurant, 150, stdin);

//DoWhile definir tipo de comida.
    do{
        printf("\nTipo de comida:\n 1-Mineira;\n 2-Nordestina; \n 3-Mexicana; \n 4-Arábe; \n 5-Chinesa; \n 6-Italiana; \n 7-Vegetariana; \n 8-Vegana \n");
        scanf("%d", &cousine);
        switch(cousine){
            case 1:
                strcpy(new_restaurant->type_food, "Mineira");
                break;
            case 2:
                strcpy(new_restaurant->type_food, "Nordestina");
                break;
            case 3:
                strcpy(new_restaurant->type_food, "Mexicana");
                break;
            case 4:
                strcpy(new_restaurant->type_food, "Árabe");
                break;
            case 5:
                strcpy(new_restaurant->type_food, "Chinesa");
                break;
            case 6:
                strcpy(new_restaurant->type_food, "Italiana");
                break;
            case 7:
                strcpy(new_restaurant->type_food, "Vegetariana");
                break;
            case 8:
                strcpy(new_restaurant->type_food, "Vegana");
                break;
            default:
                printf("\nOpção inválida!");
        }
    }while(cousine < 1 || cousine > 8);
//DoWhile para definir a nota do restaurante
    do{
        printf("\nDigite a nota do restaurante de acordo com a tabela:\n0-Horrivel; \n1-Péssimo; \n2-Ruim;\n3-Regular;\n4-Bom;\n5-Otímo;\n ");
        scanf("%d", &avaliation);
        switch(avaliation){
            case 0:
                new_restaurant->note_food = 0;
                break;
            case 1:
                new_restaurant->note_food = 1;
                break;
            case 2:
                new_restaurant->note_food = 2;
                break;
            case 3:
                new_restaurant->note_food = 3;
                break;
            case 4:
                new_restaurant->note_food = 4;
                break;
            case 5:
                new_restaurant->note_food = 5;
                break;
           
            default:
                printf("\nOpção inválida!");
        }
    }while(avaliation < 0 || avaliation > 6);
    new_restaurant->next = *head;
    *head = new_restaurant;
}
//Função para listar os restaurantes cadastrados
void list_restaurant(food_attributes *head){
     //limpar console
    system("cls");
    food_attributes *aux = head;
    	printf("Listando todos os restaurantes cadastrados: ");
    while(aux != NULL){
        printf("------------------------------------------------------------------------------------------\n");
        printf("\n Dados dos restaurantes : \n");
        printf("\n Nome do restaurante: %s", aux->restaurant_name);
        printf("\n Endereço do restaurante: %s", aux->adress_restaurant);
        printf("\n Tipo de comida: %s", aux->type_food);
        printf("\n");
        printf("\n Nota do restaurante: %d", aux->note_food);
        printf("\n");
        aux = aux->next;
    }
}

//Função para listar os restaurantes cadastrados por nota
void list_restaurant_avaliantion(food_attributes *head){   
    food_attributes *aux = head;
    int i;
    for(i=5;i>=0;i--){

    while(aux != NULL){
    	if(aux -> note_food == i ){
	      printf("Listando todos os restaurantes cadastrados: ");
	        printf("------------------------------------------------------------------------------------------\n");
	        printf("\n Dados dos restaurantes : \n");
	        printf("\n Nome do restaurante: %s", aux->restaurant_name);
	        printf("\n Endereço do restaurante: %s", aux->adress_restaurant);
	        printf("\n Tipo de comida: %s", aux->type_food);
	        printf("\n");
	        printf("\n Nota do restaurante: %d", aux->note_food);
	        printf("\n");
	      
        	}
      aux = aux->next;
    }
        aux = head; 	
    	}
}

//Função para listar os restaurantes cadastrados por ordem alfabetica
void list_restaurant_alpha_order(food_attributes *head){
 
    //variavel auxiliar
    food_attributes *aux = head;
    //variavel para armazenar o nome do restaurante
    char name[50];
    //variavel para armazenar o endereço do restaurante
    char adress[150];
    //variavel para armazenar o tipo de comida
    char food[50];
    //variavel para armazenar a nota do restaurante
    int note;
    //variavel para armazenar o proximo restaurante
    food_attributes *next;
    //loop para percorrer a lista
    while(aux!=NULL){
        next = aux->next;
        //loop para percorrer a lista
        while(next!=NULL){
            //condicional para ordenar por nome
            if(strcmp(aux->restaurant_name, next->restaurant_name)>0){
                //atribuição dos valores
                strcpy(name, aux->restaurant_name);
                strcpy(adress, aux->adress_restaurant);
                strcpy(food, aux->type_food);
                note = aux->note_food;
                //atribuição dos valores
                strcpy(aux->restaurant_name, next->restaurant_name);
                strcpy(aux->adress_restaurant, next->adress_restaurant);
                strcpy(aux->type_food, next->type_food);
                aux->note_food = next->note_food;
                //atribuição dos valores
                strcpy(next->restaurant_name, name);
                strcpy(next->adress_restaurant, adress);
                strcpy(next->type_food, food);
                next->note_food = note;
            }
            //atribuição do proximo restaurante
            next = next->next;
        }
        //atribuição do proximo restaurante
        aux = aux->next;
    }
    //variavel auxiliar
    aux = head;
    //loop para percorrer a lista
    while(aux!=NULL){
        printf("------------------------------------------------------------------------------------------\n");
        printf("\n Dados dos restaurantes : \n");
        printf("\n Nome do restaurante: %s", aux->restaurant_name);
        printf("\n Endereço do restaurante: %s", aux->adress_restaurant);
        printf("\n Tipo de comida: %s", aux->type_food);
        printf("\n");
        printf("\n Nota do restaurante: %d", aux->note_food);
        printf("\n");
        aux = aux->next;
    }
}



int main(){
    setlocale(LC_ALL, "Portuguese");
    food_attributes *head = NULL;
    int option;
        printf("\nIfome - Encontre os melhores restaurantes aqui");
    do{
        printf("\n------------------------------------------------------------------------------------------\n");
        printf("Menu de opções: \n");
        printf("1- Inserir um novo restaurante \n");
        printf("2- Listar todos os restaurantes cadastrados \n");
        printf("3- Listar todos os restaurantes cadastrados por ordem de avaliação \n");
        printf("4- Listar todos os restaurantes cadastrados por ordem de alfabética \n");
        printf("5- Sair do programa; \n");
        printf("Digite a opção desejada: ");    
        scanf("%d", &option);
        switch(option){
            case 1:
                insert_restaurant(&head);
                break;
            case 2:
                list_restaurant(head);
                break;
            case 3:
				list_restaurant_avaliantion(head);
				break;  
			case 4:
				list_restaurant_alpha_order(head);
				break;     
            case 5:
                printf("\n Obrigado por utilizar o Ifome! Até a próxima!");
                break;
            default:
                printf("\n Opção inválida!");
        }  
    }while(option != 5);
}
