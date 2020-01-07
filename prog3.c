#include <stdio.h>

int interface;
float moeda;

int main(void){ //Programa com um menu de escolhas para fazer conversões

    printf("Insira um menu:: \n 1- Euro - USD  \n 2- USD  - Euro \n 3- Euro - CAD \n 4- CAD - Euro\n");
    scanf("%d", &interface);

    switch(interface){ //4 Opções para o utilizador para conversões.

        case 1: //Converte de € para $ 

        printf("Insira o valor que quer converter: ");
        scanf("%f", &moeda);
        printf("%.2f EUR = %.2f USD\n", moeda, moeda*1.12);

        break;

        case 2: //Converte de $ para €

        printf("Insira o valor que quer converter: ");
        scanf("%f", &moeda);
        printf("%.2f USD = %.2f EUR\n", moeda, moeda/1.12);

        break;

        case 3: //Converte de € para CAN

        printf("Insira o valor que quer converter: ");
        scanf("%f", &moeda);
        printf("%.2f EUR = %.2f CAN", moeda, moeda*1.45);

        break;

        case 4: //Converte de CAN para €

        printf("Insira o valor que quer converter: ");
        scanf("%f", &moeda);
        printf("%.2f CAN = %.2f EUR", moeda, moeda/1.45);

        break;

        default: //Se for diferente

        printf("Insira um menu válido\n");
    }
}