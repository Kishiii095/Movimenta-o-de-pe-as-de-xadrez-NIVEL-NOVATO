#include <stdio.h>

int main() {
    int movimento; // Variável para o número de casas a serem movidas
    char peça;     // Variável para a peça (T = torre, B = bispo, R = rainha)
    char direção;  // Variável para a direção do movimento (C = cima, B = baixo, E = esquerda, D = direita, etc.)

    while(1) { // Loop infinito
        // Pedindo ao usuário para escolher uma peça
        printf("Escolha uma peça (T para torre, B para bispo, R para rainha) ou 'Q' para sair: ");
        scanf(" %c", &peça); // O espaço antes de %c ajuda a capturar o caractere corretamente após o \n

        // Se o usuário digitar 'Q', o programa sai do loop
        if (peça == 'Q' || peça == 'q') {
            printf("Saindo do programa...\n");
            break; // Sai do loop
        }

        // Pedindo o movimento da peça
        printf("Digite o movimento da peça (quantas casas você deseja andar): ");
        scanf("%d", &movimento);

        // Pedindo a direção para o movimento
        printf("Escolha a direção para a peça:\n");
        printf("C para cima, B para baixo, E para esquerda, D para direita,\n");
        printf("Q para diagonal direita-cima, A para diagonal direita-baixo,\n");
        printf("Z para diagonal esquerda-cima, W para diagonal esquerda-baixo: ");
        scanf(" %c", &direção);

        // Usando o switch para tratar a peça e a direção escolhida
        switch (peça) {
        case 'T': // Torre
        case 't':
            if (direção == 'C' || direção == 'c') {
                printf("A torre andou %d casas para cima.\n", movimento);
            } else if (direção == 'B' || direção == 'b') {
                printf("A torre andou %d casas para baixo.\n", movimento);
            } else if (direção == 'E' || direção == 'e') {
                printf("A torre andou %d casas para esquerda.\n", movimento);
            } else if (direção == 'D' || direção == 'd') {
                printf("A torre andou %d casas para direita.\n", movimento);
            } else {
                printf("Direção inválida para a torre.\n");
            }
            break;

        case 'B': // Bispo
        case 'b':
            if (direção == 'Q' || direção == 'q') {
                printf("O bispo andou %d casas na diagonal direita-cima.\n", movimento);
            } else if (direção == 'A' || direção == 'a') {
                printf("O bispo andou %d casas na diagonal direita-baixo.\n", movimento);
            } else if (direção == 'Z' || direção == 'z') {
                printf("O bispo andou %d casas na diagonal esquerda-cima.\n", movimento);
            } else if (direção == 'W' || direção == 'w') {
                printf("O bispo andou %d casas na diagonal esquerda-baixo.\n", movimento);
            } else {
                printf("Direção inválida para o bispo.\n");
            }
            break;

        case 'R': // Rainha
        case 'r':
            if (direção == 'C' || direção == 'c') {
                printf("A rainha andou %d casas para cima.\n", movimento);
            } else if (direção == 'B' || direção == 'b') {
                printf("A rainha andou %d casas para baixo.\n", movimento);
            } else if (direção == 'E' || direção == 'e') {
                printf("A rainha andou %d casas para esquerda.\n", movimento);
            } else if (direção == 'D' || direção == 'd') {
                printf("A rainha andou %d casas para direita.\n", movimento);
            } else if (direção == 'Q' || direção == 'q') {
                printf("A rainha andou %d casas na diagonal direita-cima.\n", movimento);
            } else if (direção == 'A' || direção == 'a') {
                printf("A rainha andou %d casas na diagonal direita-baixo.\n", movimento);
            } else if (direção == 'Z' || direção == 'z') {
                printf("A rainha andou %d casas na diagonal esquerda-cima.\n", movimento);
            } else if (direção == 'W' || direção == 'w') {
                printf("A rainha andou %d casas na diagonal esquerda-baixo.\n", movimento);
            } else {
                printf("Direção inválida para a rainha.\n");
            }
            break;

        default:
            printf("Peça inválida. Tente novamente.\n");
            break;
        }
    }

    return 0;
}
