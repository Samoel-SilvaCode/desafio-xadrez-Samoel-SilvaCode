#include <stdio.h>


void torre(int n){ // recursividade da torre
if (n > 0 ) // Se o número inserido for maior que zero vai executar
    {
    printf("Direita\n");// mostra o movimento
    torre(n-1);// decrementa
    }
 }

 void rainha(int n){ // recursividade da rainha
if (n > 0 ) // Se o número inserido for maior que zero vai executar
    {
    printf("Esquerda\n");// mostra o movimento
    torre(n-1);// decrementa
    }
 }


  void bispo(int n){ // recursividade da rainha

   if (n > 0) // Se o número inserido for maior que zero vai executar
   {
    for (int i = 0; i < 1; i++) // Executa apenas uma vez, porém o que define a quantidade de vezes de execução é o número inserido
        printf("Cima\n");
    {
        for (int j = 0; j < 1; j++){// Executa apenas uma vez, porém o que define a quantidade de vezes de execução é o número inserido
             printf("Direita\n");
        }
    }
    bispo(n-1);// decrementa
   }

  }
 



int main (){

    int opcao;
    int j = 0;
    int i =0;

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
        printf("Torre selecionada\n");
        printf("Informe a quantidade de casas que a torre deve se mover\n");
        scanf("%d", &i); // opção do usuário decidir a quantidade de casas que anda
        torre(i); // chama o procedimento  recursivo torre
        opcao = 0;// retorna pro menu depois do usuario se mover
        break;

    case 2:
        printf("Bispo selecionado\n");
        printf("Informe a quantidade de casas que o bispo deve se mover\n");
        scanf("%d", &i);// opção do usuário decidir a quantidade de casas que anda
        bispo(i);
        opcao = 0;
        break;
        
        case 3:
        printf("Rainha selecionada\n");
        printf("Informe a quantidade de casas que a Rainha deve se mover\n");
        scanf("%d", &i);// opção do usuário decidir a quantidade de casas que anda
        rainha(i); // chama o procedimento  recursivo rainha
  
        opcao = 0;// retorna pro menu depois do usuario se mover
        break;

        case 4:
        printf("Cavalo selecionado\n");
        printf("Movendo Cavalo\n");

        for (int  i = 0; i < 1; i++)
        {
           for (int i = 0, j = 2;  i < 2 && j >0 ; i++ , j--) // Loop aninhado com duas variaves e condição é pra formar o L
           {
                printf("Cima\n");
           }
           
           printf("Direta\n");
          
        }
        
        opcao = 0;// retorna pro menu depois do usuario se mover
        
        break;

    default:
        opcao = 0; // retorna pro menu 
        break;
    }
    
       } while (opcao <= 0 || opcao > 4); // while aqui embaixo pra manter o programa funcionando

    return 0; // retorna pro menu depois do usuario se mover
}

