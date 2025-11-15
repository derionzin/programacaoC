#include <stdio.h>
#include <stdlib.h>

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    int ataque = 1;
    int ataqueB = 0;
    int defesa = 1;
    int defesaB = 0;
    int recuo = 0;
    int recuoB = 1;
    int escolha1;
    int escolha2;


    // Escolha do primeiro atributo para comparação
    printf("escolha o primeiro atributo\n1.ataque\n2.defesa\n3.recuo\n");
    scanf("%d", &escolha1);

    switch (escolha1)
    {
    case 1:
        escolha1 = ataque > ataqueB ? 1 : 0;
        break;
    case 2:
        escolha1 = defesa > defesaB ? 1 : 0;
        break;
    case 3:
        escolha1 = recuo > recuoB ? 1 : 0;
        break;
    default:
        printf("escolha invalida\n");
        break;
    };


    // Escolha do segundo atributo para comparação
    printf("escolha o segundo atributo\n1.ataque\n2.defesa\n3.recuo\n");
    scanf("%d", &escolha2);

    switch (escolha2)
    {
    case 1:
        escolha2 = ataque > ataqueB ? 1 : 0;
        break;
    case 2:
        escolha2 = defesa > defesaB ? 1 : 0;
        break;
    case 3:
        escolha2 = recuo > recuoB ? 1 : 0;
        break;
    default:
        printf("escolha invalida\n");
        break;
    };


    // conclusão
    if (escolha1 && escolha2) {
        printf("Voce venceu!\n");
    } 
    else if (escolha1 || escolha2)
    {
        printf("Empate!\n");
    }
    else {
        printf("Voce perdeu!\n");
    }


    return 0;
}
