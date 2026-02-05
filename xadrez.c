#include <stdio.h>

int main (){

    int opcao;
    int i = 0;
    int j = 0;

        printf("#### Movimento de peças de Xadrez ####\n");
        // Menu que exige o input do usuário de acordo com as opções apresentadas
    do
    {
        
        printf("Selecione uma peça para mover\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        printf("5. Sair\n");
        printf("Escolha uma opção:");
        scanf("%d", &opcao);

         if (opcao == 5 ) // if que faz o controle do que está sendo digitado
    {
        printf("Encerrando o programa\n");
        return 0;
    }else if (opcao > 5 || opcao <=0)
    {
        printf("Digite uma opção válida\n");
    }
    


 

   
    // Switch case para pegar a peça selecionada

    switch (opcao)
    {
    case 1:
        int i;
        printf("Torre selecionada\n");
        printf("Informe a quantidade de casas que a torre deve se mover\n");
        scanf("%d", &i); // opção do usuário decidir a quantidade de casas que anda
        for (int l = 0; l < i; l++)
        {
            printf("Direita\n");
        }
        opcao = 0; // volta por menu de escola das peças
        break;

    case 2:
        printf("Bispo selecionado\n");
        printf("Informe a quantidade de casas que o bispo deve se mover\n");
        scanf("%d", &i);
        while ( j < i)
        {
            printf("Cima, Direita\n");

            j++;
        }
          opcao = 0;
        break;
        
        case 3:
        printf("Rainha selecionada\n");
        printf("Informe a quantidade de casas que a Rainha deve se mover\n");
        scanf("%d", &i);
        
        do
        {
            printf("Esquerda\n");
            j++;
        } while (j < i );
          opcao = 0;
        break;

        case 4:
        printf("Cavalo selecionado\n"); // Abaixo loop aninhado para movitação do cavalo
        printf("Movendo Cavalo\n");

        for (int  i = 0; i < 1; i++)
        {
            while (j < 2)
            {
                printf("Baixo\n");

                j++;
            }
            printf("Esquerda\n");
          
        }
        
        opcao = 0;
        
        break;

    default:
        opcao = 0;
        break;
    }
    
       } while (opcao <= 0 || opcao > 4); // while aqui embaixo pra manter o programa funcionando

    return 0;
}

