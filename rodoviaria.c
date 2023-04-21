#include <stdio.h> 
#include <stdlib.h>
#include <windows.h> 
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <time.h>
typedef struct
{
char cidadeOrigem[100];
char cidadeDestino[100];
char dataVolta[11];
char dataIda[11];
int assento;
} passagem;
typedef struct
{
char cpf[14];
char nome[100];
char telefone[15];
int idade;
} passageiro;
int main()
{
int choice;
passageiro passageiro1;
passagem passagem1;
time_t t = time(NULL);
struct tm tm = *localtime(&t);
setlocale(LC_ALL, "PORTUGUESE");
printf("===============PASSAGENS FATEC====================\n");
printf("============Reserve ja sua passagem===============\n");
do {
printf("Selecione as opções   \n");
printf("1 - Cidade de origem \n");
printf("2 - Cidade de destino \n");
printf("3 - Data de ida \n");
printf("4 - Data de volta \n");
printf("5 - Assento \n");
printf("6 - Cadastrar Passageiro \n");
printf("7 - Visualizar Passagem \n");
printf("8 - Cancelar e sair \n");
scanf("%i", &choice);
system("cls");
switch (choice)
{
case 1:
printf("Digite a cidade de origem: ");
fflush(stdin);
gets(passagem1.cidadeOrigem);
system("cls");
break;
case 2:
printf("Digite a cidade de destino: ");
fflush(stdin);
gets(passagem1.cidadeDestino);
system("cls");
break;
case 3:
printf("Digite a data de ida (DD/MM/AAAA): ");
fflush(stdin);
gets(passagem1.dataIda);
system("cls");
break;
case 4:
printf("Digite a data de volta (DD/MM/AAAA): ");
fflush(stdin);
gets(passagem1.dataVolta);
system("cls");
break;
case 5:
printf("Digite o assento: ");
scanf("%i", &passagem1.assento);
system("cls");
break;
case 6:
printf("Digite o nome: ");
fflush(stdin);
gets(passageiro1.nome);
printf("Digite o CPF: ");
fflush(stdin);
gets(passageiro1.cpf);
printf("Digite o telefone: ");
fflush(stdin);
gets(passageiro1.telefone);
printf("Digite a idade: ");
scanf("%i", &passageiro1.idade);
if (passageiro1.idade < 18)
{
printf("Voce nao pode fazer reserva, pois voce e menor de idade,compra será permitida somente com acompanhante ");
system("pause");
system("cls");
}
else
{
system("cls");
}

break;
case 7:
system("cls");
printf("===============PASSAGENS FATEC====================\n");
printf("=================Sua Passagem=====================\n");
printf("Cidade de origem: %s\n", passagem1.cidadeOrigem);
printf("Cidade de destino: %s\n", passagem1.cidadeDestino);
printf("Data de ida: %s\n", passagem1.dataIda);
printf("Data de volta: %s\n", passagem1.dataVolta);
printf("Assento: %i\n", passagem1.assento);
printf("Nome: %s\n", passageiro1.nome);
printf("CPF: %s\n", passageiro1.cpf);
printf("Telefone: %s\n", passageiro1.telefone);
printf("Idade: %i\n", passageiro1.idade);
printf("Valor: $%d reais\n", rand( )% 100);
printf("Data da emissão da passagem:  %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
printf("==============TENHA UMA BOA VIAGEM================\n");
return 0;
case 8:
return 0;
break;
default:
printf("Opção invalida\n");
break;
}
}while (choice != 8);
}
