#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {

    int menu = 0;
    
    printf("Bem Vindo ao Xadrez(não a cadeia)!\n");

    while (menu == 0 || menu > 3) {
    printf("Qual peça Gostaria de experimentar?\n\n");
    printf("1.Torre\n");
    printf("2.Bispo\n");
    printf("3.Rainha\n");
    scanf("%d", &menu);

    switch (menu)
    {
        case 1: {
            int torre = 1;
            while (torre < 6) {
                printf("A torre se moveu para a DIREITA\n");
                torre++; 
            }
        
            break;
        }

        case 2: 
            for (int bispo = 0; bispo < 5; bispo++) {
                printf("O bispo se moveu para CIMA e para DIREITA\n");
            }
            break;

        case 3: {
            int rainha = 0;
            do {
                printf("A Rainha se moveu para a ESQUERDA\n");
                rainha++;
                } while (rainha < 8);
            break;
            }

        default:
            printf("Esta não é uma opção válida!\n\n");
            break;
    }
}
    

    return 0;
}
