#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao, num1, num2;

    do
    {
        printf("\n1 - Soma\n2 - Subtrair\n3 - Multiplicar\n4 - Divisão\n0 - Sair\n\n");
        scanf("%d", &opcao);

        if(opcao > 0 && opcao < 5){
        printf("Digite dois numeros: ");
        scanf("%d%d", &num1, &num2);
        }

        switch(opcao)
        {
        case 0:
            printf("Saindo");
            break;

        case 1:
            printf("Soma: %d\n", num1 + num2);
            break;

        case 2:
            printf("Subtração: %d\n", num1 - num2);
            break;

        case 3:
            printf("Multiplicação: %d\n", num1 * num2);
            break;

        case 4:
            while(num2 == 0)
            {
                printf("Não existe divisão por zero \nDigite outro valor:  ");
                scanf("%d", &num2);
            }
            printf("Divisão: %d\n", num1 / num2);
            break;

        default:
            printf("Opção inválida. \nDigite outra opção");
        }
    }
    while(opcao != 0);
}
