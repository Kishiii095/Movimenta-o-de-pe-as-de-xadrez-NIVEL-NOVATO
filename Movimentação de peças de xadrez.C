#include <stdio.h>

void movimento_torre(char direcao) {
    if (direcao == 'C' || direcao == 'c') {
        printf("Torre moveu 3 casas para cima.\n");
    } else if (direcao == 'B' || direcao == 'b') {
        printf("Torre moveu 3 casas para baixo.\n");
    } else if (direcao == 'E' || direcao == 'e') {
        printf("Torre moveu 3 casas para a esquerda.\n");
    } else if (direcao == 'D' || direcao == 'd') {
        printf("Torre moveu 3 casas para a direita.\n");
    } else {
        printf("Direção inválida para a torre.\n");
    }
}

void movimento_bispo(char direcao) {
    if (direcao == 'Q' || direcao == 'q') {
        printf("Bispo moveu 3 casas na diagonal direita-cima.\n");
    } else if (direcao == 'A' || direcao == 'a') {
        printf("Bispo moveu 3 casas na diagonal direita-baixo.\n");
    } else if (direcao == 'Z' || direcao == 'z') {
        printf("Bispo moveu 3 casas na diagonal esquerda-cima.\n");
    } else if (direcao == 'W' || direcao == 'w') {
        printf("Bispo moveu 3 casas na diagonal esquerda-baixo.\n");
    } else {
        printf("Direção inválida para o bispo.\n");
    }
}

void movimento_rainha(char direcao) {
    if (direcao == 'C' || direcao == 'c') {
        printf("Rainha moveu 3 casas para cima.\n");
    } else if (direcao == 'B' || direcao == 'b') {
        printf("Rainha moveu 3 casas para baixo.\n");
    } else if (direcao == 'E' || direcao == 'e') {
        printf("Rainha moveu 3 casas para a esquerda.\n");
    } else if (direcao == 'D' || direcao == 'd') {
        printf("Rainha moveu 3 casas para a direita.\n");
    } else if (direcao == 'Q' || direcao == 'q') {
        printf("Rainha moveu 3 casas na diagonal direita-cima.\n");
    } else if (direcao == 'A' || direcao == 'a') {
        printf("Rainha moveu 3 casas na diagonal direita-baixo.\n");
    } else if (direcao == 'Z' || direcao == 'z') {
        printf("Rainha moveu 3 casas na diagonal esquerda-cima.\n");
    } else if (direcao == 'W' || direcao == 'w') {
        printf("Rainha moveu 3 casas na diagonal esquerda-baixo.\n");
    } else {
        printf("Direção inválida para a rainha.\n");
    }
}

void movimento_cavalo() {
    char direcao;
    
    // Movimentos do cavalo
    printf("Escolha a direção do cavalo:\n");
    printf("1 - Duas casas para cima e uma para a direita\n");
    printf("2 - Duas casas para cima e uma para a esquerda\n");
    printf("3 - Duas casas para baixo e uma para a direita\n");
    printf("4 - Duas casas para baixo e uma para a esquerda\n");
    printf("Escolha o movimento (1, 2, 3, ou 4): ");
    scanf(" %c", &direcao);

    switch(direcao) {
        case '1':
            printf("Cavalo moveu duas casas para cima e uma para a direita.\n");
            break;
        case '2':
            printf("Cavalo moveu duas casas para cima e uma para a esquerda.\n");
            break;
        case '3':
            printf("Cavalo moveu duas casas para baixo e uma para a direita.\n");
            break;
        case '4':
            printf("Cavalo moveu duas casas para baixo e uma para a esquerda.\n");
            break;
        default:
            printf("Opção inválida para o movimento do cavalo.\n");
            break;
    }
}

int main() {
    char peça;
    
    while(1) {
        printf("Escolha uma peça (T para torre, B para bispo, R para rainha, C para cavalo) ou 'Q' para sair: ");
        scanf(" %c", &peça);
        
        if (peça == 'Q' || peça == 'q') {
            printf("Saindo do programa...\n");
            break;
        }

        char direcao;
        printf("Escolha a direção para a peça:\n");
        if (peça == 'T' || peça == 't') {
            printf("C para cima, B para baixo, E para esquerda, D para direita\n");
            scanf(" %c", &direcao);
            movimento_torre(direcao);
        } else if (peça == 'B' || peça == 'b') {
            printf("Q para diagonal direita-cima, A para diagonal direita-baixo, Z para diagonal esquerda-cima, W para diagonal esquerda-baixo\n");
            scanf(" %c", &direcao);
            movimento_bispo(direcao);
        } else if (peça == 'R' || peça == 'r') {
            printf("C para cima, B para baixo, E para esquerda, D para direita, Q para diagonal direita-cima, A para diagonal direita-baixo, Z para diagonal esquerda-cima, W para diagonal esquerda-baixo\n");
            scanf(" %c", &direcao);
            movimento_rainha(direcao);
        } else if (peça == 'C' || peça == 'c') {
            movimento_cavalo();
        } else {
            printf("Peça inválida. Tente novamente.\n");
        }
    }

    return 0;
}
