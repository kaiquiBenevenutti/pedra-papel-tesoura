#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
    int jogada, jogadaPC, pontos, pontosPC;
    char resposta;
    
    
    printf("JOGO PEDRA, PAPEL E TESOURA!\n\n\n");
    
    do{
        
        printf("Faça sua jogada:\n\n");
        printf("Pedra: 1\n");
        printf("Papel: 2\n");
        printf("Tesoura: 3\n");
        
        scanf("%d", &jogada);
        
        srand(time(NULL));
        jogadaPC = rand() % 3 +1;
        
        
        switch(jogada){
            case 1: printf("Voce jogou pedra!\n"); break;
            case 2: printf("Voce jogou papel!\n"); break;
            case 3: printf("Voce jogou tesoura!\n"); break;
            default : printf("Jogada invalida, tente novamente.\n"); break;
        }
        
        switch(jogadaPC){
            case 1: printf("O computador jogou pedra!\n"); break;
            case 2: printf("O computador papel!\n"); break;
            case 3: printf("O computador tesoura!\n"); break;
            default : printf("Ocorreu um erro no sistema.\n"); break;
        }
        
         switch (jogada) {
            case 1:
                switch (jogadaPC) {
                    case 1: printf("Empate!\n"); break;
                    case 2: printf("Computador Ganhou: Papel embrulha Pedra\n"); pontosPC++; break;
                    case 3: printf("Você Ganhou: Pedra quebra Tesoura\n"); pontos++; break;
                }
                break;
            case 2:
                switch (jogadaPC) {
                    case 1: printf("Você Ganhou: Papel embrulha Pedra\n"); pontos++; break;
                    case 2: printf("Empate!\n"); break;
                    case 3: printf("Computador Ganhou: Tesoura corta Papel\n"); pontosPC++; break;
                }
                break;
            case 3:
                switch (jogadaPC) {
                    case 1: printf("Computador Ganhou: Pedra quebra Tesoura\n"); pontosPC++; break;
                    case 2: printf("Você Ganhou: Tesoura corta Papel\n"); pontos++; break;
                    case 3: printf("Empate!\n"); break;
                }
                break;
        }
        
        printf("Deseja jogar novamente?(S/N):");
        scanf(" %c", &resposta);
        
    }while (resposta == 's' || resposta == 'S');
    
    printf("Seus pontos: %d\n", pontos);
    printf("Pontos do computador: %d\n", pontosPC);
    
    if(pontosPC < pontos){
        printf("Voce ganhou Parabens!");
    } else if(pontosPC > pontos){
        printf("O computador ganhou, voce perdeu.");
    } else {
        printf("Empate.");
    }
    
    
    return 0;
}
