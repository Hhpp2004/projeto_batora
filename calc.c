#include <stdio.h>

//float, double, long int, long float, void, char, int.
/*
 Operadores aritmeticos:
 +,-,*,/,%,=

 Operadores logicos:
 !,!=,==,&&,||
 */
/*
Estrutura de repetição
while
int i = 0;
while(i <= getvalor(i))
{
i++;
}

do - while
int opc;
do
{
    scanf("%i",&opc);
    cod;
}while(opc != -1);


int i;
for(i = 0;i < 5;i++)
 {
 logica de codigo;
 }
 */

int main()
{

    //função de soma
    float a = 0.0,b = 0.0,c = 0.0;
    int opc;

    do{
        printf("\n0 Sair, \n1 soma, \n2 subtracao, \n3 multiplicacao, \n4 divisao\nDigite uma opcao: ");
        scanf("%d",&opc);
        if(opc==1){
            printf("Digite um valor: ");
            scanf("%f",&a);

            printf("Digite um valor: ");
            scanf("%f",&b);

            c=a+b;
            printf("Resultado %.2f",c);
        }

        else if(opc==2){
            printf("Digite um valor: ");
            scanf("%f",&a);

            printf("Digite um valor: ");
            scanf("%f",&b);

            c=a-b;
            printf("Resultado %.2f",c);
        }
        else if(opc==3){
            printf("Digite um valor: ");
            scanf("%f",&a);

            printf("Digite um valor: ");
            scanf("%f",&b);

            c=a*b;
            printf("Resultado %.2f",c);
        }
        else if(opc==4){
            printf("Digite um valor: ");
            scanf("%f",&a);

            printf("Digite um valor: ");
            scanf("%f",&b);

            c=a/b;
            printf("Resultado %.2f",c);
        }
        else {
            printf("opcao invalida\n");
        }
    }while(opc != 0);
    printf("\nAte logo\n");
    return 0;
}
