#include <stdio.h>
int main(){

 
    printf("***Simulação do Movimento do Bispo Novato***\n");    // nível novato 
for (int b = 0; b <= 5; b++) { // simulação do movimento do bispo com for
    printf("direita\ncima\n");// movimento na diagonal significa mover 1 casa p/direita e 1 casa p/cima por 5 vezes
}

// simulação do movimento da torre 5 casas para a direita
printf("***Simulação do Movimento da Torre Novato***\n");
int t = 0;
while (t < 5){ // simulação do movimento da torre com while
    printf("direita\n");
    t++;
}

// simulação do movimento da rainha 8 casas para a esquerda
printf("***Simulação do Movimento da Rainha Novato***\n");
int r = 0;
do { // simulação do movimento da rainha com do-while
    printf("esquerda\n");
    r++;
} while(r<8);


printf("***Simulação do Movimento do Cavalo Aventureiro***\n"); // nivel aventureiro

int moveCavalo = 1;

while (moveCavalo--)
{   
    for (int i = 0; i < 2; i++) { // simulação do movimento do cavalo com for aninhado no while
        printf("cima\n");
    }    
    printf("direita\n");
}


printf("***Simulação do Movimento do Cavalo com Solicitação de Opção Aventureiro***\n"); // sofisticação com solicitação ao usuário
int opcao;
int movimentoCavalo = 1; // variável para controlar o movimento do cavalo
printf("Escolha uma opção 1 a 4:\n");// menu de opções para o movimento do cavalo
scanf("%d", &opcao);
switch(opcao) {
    case 1: // 2 casas para cima e 1 para a direita
        printf("Movimentando o Cavalo para...\n");
        while (movimentoCavalo--)
{   
    for (int i = 0; i < 2; i++) { 
        printf("cima\n");
    }    
    printf("direita\n");
}
        break;
    case 2: //2 casas para cima e 1 para a esquerda 
        printf("Movimentando o Cavalo para...\n");
        while (movimentoCavalo--)
{   
    for (int i = 0; i < 2; i++) { // simulação do movimento do cavalo com for aninhado no while
        printf("cima\n");
    }    
    printf("Esquerda\n");
}
        break;
    case 3: // 2 casas para esquerda e 1 para cima
        printf("Movimentando o Cavalo para...\n");
        while (movimentoCavalo--)
{   
    for (int i = 0; i < 2; i++) { // simulação do movimento do cavalo com for aninhado no while
        printf("esquerda\n");
    }    
    printf("cima\n");
}
        break;
    case 4: // 2 casas para direita e 1 para cima
        printf("Movimentando o Cavalo para...\n");
        while (movimentoCavalo--)
{   
    for (int i = 0; i < 2; i++) { // simulação do movimento do cavalo com for aninhado no while
        printf("direita\n");
    }    
    printf("cima\n");
    break;
    default:
        printf("Opção inválida! Por favor, escolha um número de 1 a 4.\n");
        break;
}
}
 printf("*** Movimento do Bispo Mestre***\n");
// nivel mestre
// substituição dos loops simples que controlam os movimentos da Torre, Bispo e Rainha por funções recursivas
 void bispoRecursivo(int casas) {
    if (casas > 0) {
        printf("direita\ncima\n"); // movimento do bispo
        bispoRecursivo(casas - 1); // chamada recursiva para a próxima casa
    }
} 

    bispoRecursivo(5); // chama a função recursiva para simular o movimento do bispo por 5 casas

    printf("***Movimento da Torre Mestre***\n");

void torreRecursivo(int casas) {
    if (casas > 0) {
        printf("direita\n"); // movimento da torre
        torreRecursivo(casas - 1); // chamada recursiva para a próxima casa
    }
}
    torreRecursivo(5); // chama a função recursiva para simular o movimento da torre por 5 casas

    printf("*** Movimento da Rainha Mestre***\n");

void rainhaRecursivo(int casas) {
    if (casas > 0) {
        printf("esquerda\n"); // movimento da rainha
        rainhaRecursivo(casas - 1); // chamada recursiva para a próxima casa
    }
}
    rainhaRecursivo(8); // chama a função recursiva para simular o movimento da rainha por 8 casas

    printf("***Movimento do Bispo Mestre***\n"); //  Bispo implementado com recursividade e loops aninhados, 
    //  o loop mais externo para o movimento vertical, e o mais interno para o movimento horizontal.

void bispo_Recursivo(int casas) {
    for(int i = 0; i<5; i++) { // simulação do movimento do bispo com for
        printf("cima\n"); // na diagonal 1 casa p/direita e 1 p/cima por 5 casas
        int i = 0;
        while (i < casas) {
            printf("direita\n", i); // movimento do bispo
            if (i == 5) { 
                bispo_Recursivo(casas - 1); // chamada recursiva para a próxima casa
        }
        i++;
    }
}
}
    bispo_Recursivo(1); // chama a função recursiva para simular o movimento do bispo por 5 casas
  
// simulação do movimento do cavalo com multiplas variáveis e condições 2 casas para cima e uma para a direita
// usando continue e break

printf("***Movimento do Cavalo Mestre***\n");
int movimento_Cavalo = 1;
for (int i = 0; i < movimento_Cavalo; i++) {
    for (int j = 0; j <= 2; j++) { // loop aninhado para o movimento do cavalo
        if (j == 2) {
            printf("direita\n"); // movimento do cavalo para a direita
            continue; // continua para o próximo loop
        }
        printf("cima\n"); // movimento do cavalo para cima
    }
    if (i == movimento_Cavalo - 1) {
        break; // sai do loop quando o movimento do cavalo é concluído
    }


} 
}



    






// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
