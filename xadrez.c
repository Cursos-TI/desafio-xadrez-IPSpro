#include <stdio.h>

// Desafio de Xadrez - MateCheck

void torref (int t) {       //Função recursiva com if statement
    if (t > 0) {
        printf ("A torre se moveu para a DIREITA\n");
        torref (t-1);           //Parte fundamental que torna esta uma função recursiva. Muito semelhante ao decremento dos loops.
    }

}

void rainhaf (int r) {          //Função recursiva com if statement
    if (r > 0) {
        printf ("A rainha se moveu para a ESQUERDA\n");         
        rainhaf (r-1);          //Parte fundamental que torna esta uma função recursiva. Muito semelhante ao decremento dos loops.
    }

}

int main() {

    int menu = 0;
    
    printf("Bem Vindo ao Xadrez(não a prisão)!\n");

    while (menu == 0 || menu > 4) {             //loop que mantêm o usuário no menu enquanto não fornecer uma opção válida

        printf("Qual peça Gostaria de experimentar?\n\n");              //Menu interativo com switch para selecionar a torre a testar
        printf("1.Torre\n");
        printf("2.Bispo\n");
        printf("3.Rainha\n");
        printf("4.Cavalo\n\n");
        
        scanf("%d", &menu);
        printf("\n");

        switch (menu)
        {
            case 1: {
                int torre = 5;              //escolha do tamanho do loop
                torref(torre);              //Chamando a função torref() para iniciar o loop recursivo
                printf("\n");
                break;
            }
            
            case 2: 
                for (int bispo = 0; bispo < 5; bispo++) {           //Loop aninhado de For(). Loop mais Externo que imprime O "CIMA" no console
                    for (int i = 0; i < 1; i++) {           //Loop mais Interno que imprime o "DIREITA" no console
                        printf("O bispo se moveu para DIREITA");
                    }                
                    printf(" e para CIMA\n");
                }
                printf("\n");
                break;

            case 3: {
                int rainha = 8;              //escolha do tamanho do loop
                rainhaf(rainha);             //Chamando a função torref() para iniciar o loop recursivo
                printf("\n");
                break;
            }

            case 4: 
                for (int cavalocim = 0, cavalodir = 0; cavalocim < 2 && cavalodir < 2; cavalocim++, cavalodir++) {          //2 variáveis para 2 movimentos diferentes do cavalo / Teste se ambos são menores que dois, e os incrementa em 1 na execução
                    printf("O cavalo se moveu para CIMA\n");
                    if (cavalodir > 0) {            //teste if para fazer esta variável ser impressa apenas após cavalocim ser impresso 2 vezes.
                        printf("O cavalo se moveu para DIREITA\n");                
                    }
                }
                printf("\n");
                break;

            default:
                printf("Esta não é uma opção válida!\n\n");
                break;
        }
        getchar();          //limpar oc aractere, caso o usuário tenha digitado uma letra no menu. Previne loop infinito.
    }
    
    return 0;
}
