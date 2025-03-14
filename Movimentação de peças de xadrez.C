#include <stdio.h>

int main() {
    int movimento; // Número de casas a serem movidas
    char peça;     // Peça escolhida
    char direção;  // Direção do movimento

    while(1) { // Loop infinito
        // Escolha da peça
        printf("Escolha uma peça (T para torre, B para bispo, R para rainha, C para cavalo) ou 'Q' para sair: ");
        scanf(" %c", &peça);

        if (peça == 'Q' || peça == 'q') {
            printf("Saindo do programa...\n");
            break;
        }

        // Caso seja o cavalo, a movimentação é fixa
        if (peça == 'C' || peça == 'c') {
            printf("\nMovimentando o Cavalo...\n");
            
            for (int i = 0; i < 2; i++) {
                printf("Baixo\n");
            }
            
            int j = 0;
            while (j < 1) {
                printf("Esquerda\n");
                j++;
            }
            
            printf("\n"); // Linha em branco para separar movimentos
            continue;
        }

        // Pedindo o movimento da peça (não necessário para o cavalo)
        printf("Digite o movimento da peça (quantas casas você deseja andar): ");
        scanf("%d", &movimento);

        // Direção do movimento
        printf("Escolha a direção para a peça:\n");
        printf("C para cima, B para baixo, E para esquerda, D para direita,\n");
        printf("Q para diagonal direita-cima, A para diagonal direita-baixo,\n");
        printf("Z para diagonal esquerda-cima, W para diagonal esquerda-baixo: ");
        scanf(" %c", &direção);

        // Movimentação das peças (torre, bispo e rainha)
        switch (peça) {
        case 'T': case 't': // Torre
            if (direção == 'C' || direção == 'c')
                printf("A torre andou %d casas para cima.\n", movimento);
            else if (direção == 'B' || direção == 'b')
                printf("A torre andou %d casas para baixo.\n", movimento);
            else if (direção == 'E' || direção == 'e')
                printf("A torre andou %d casas para esquerda.\n", movimento);
            else if (direção == 'D' || direção == 'd')
                printf("A torre andou %d casas para direita.\n", movimento);
            else
                printf("Direção inválida para a torre.\n");
            break;

        case 'B': case 'b': // Bispo
            if (direção == 'Q' || direção == 'q')
                printf("O bispo andou %d casas na diagonal direita-cima.\n", movimento);
            else if (direção == 'A' || direção == 'a')
                printf("O bispo andou %d casas na diagonal direita-baixo.\n", movimento);
            else if (direção == 'Z' || direção == 'z')
                printf("O bispo andou %d casas na diagonal esquerda-cima.\n", movimento);
            else if (direção == 'W' || direção == 'w')
                printf("O bispo andou %d casas na diagonal esquerda-baixo.\n", movimento);
            else
                printf("Direção inválida para o bispo.\n");
            break;

        case 'R': case 'r': // Rainha
            if (direção == 'C' || direção == 'c')
                printf("A rainha andou %d casas para cima.\n", movimento);
            else if (direção == 'B' || direção == 'b')
                printf("A rainha andou %d casas para baixo.\n", movimento);
            else if (direção == 'E' || direção == 'e')
                printf("A rainha andou %d casas para esquerda.\n", movimento);
            else if (direção == 'D' || direção == 'd')
                printf("A rainha andou %d casas para direita.\n", movimento);
            else if (direção == 'Q' || direção == 'q')
                printf("A rainha andou %d casas na diagonal direita-cima.\n", movimento);
            else if (direção == 'A' || direção == 'a')
                printf("A rainha andou %d casas na diagonal direita-baixo.\n", movimento);
            else if (direção == 'Z' || direção == 'z')
                printf("A rainha andou %d casas na diagonal esquerda-cima.\n", movimento);
            else if (direção == 'W' || direção == 'w')
                printf("A rainha andou %d casas na diagonal esquerda-baixo.\n", movimento);
            else
                printf("Direção inválida para a rainha.\n");
            break;

        default:
            printf("Peça inválida. Tente novamente.\n");
            break;
        }
    }

    return 0;
}
