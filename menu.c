#include <stdio.h>

int main(){

    int opcao;

    while (opcao != 0){
        printf("-----------------------------------\n");
        printf("           MENU PRINCIPAL          \n");
        printf("-----------------------------------\n");

        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Tabuada\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");

        scanf("%d", &opcao);

        int num1, num2, resultado;

        switch(opcao) {
            case 1:
                printf("Digite o primeiro numero: \n");
                scanf("%d", &num1);
                printf("Digite o segundo numero: \n");
                scanf("%d", &num2);

                resultado = num1 + num2;
                printf("%d + %d = %d\n\n", num1, num2, resultado);
                break;
        
            case 2:
                printf("Digite o primeiro numero: \n");
                scanf("%d", &num1);
                printf("Digite o segundo numero: \n");
                scanf("%d", &num2);

                resultado = num1 - num2;
                printf("%d - %d = %d\n\n", num1, num2, resultado);
                break;
        
            case 3:
                printf("Digite o primeiro numero: \n");
                scanf("%d", &num1);
                printf("Digite o segundo numero: \n");
                scanf("%d", &num2);

                resultado = num1 * num2;
                printf("%d * %d = %d\n\n", num1, num2, resultado);
                break;

            case 4:
                printf("Digite um numero: \n");
                scanf("%d", &num1);
                for (int i = 0; i <= 10; i++){
                    int multi = num1 * i;
                    printf("%d * %d = %d\n", num1, i, multi);
                }
                break;
        }
    }
    printf("Obrigado por usar nosso sistema!");
}
