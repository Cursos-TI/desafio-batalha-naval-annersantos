#include <stdio.h>

#define N 5

void imprimirMatriz(int m[N][N]) {
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int cone[N][N] = {0};
    int cruz[N][N] = {0};
    int octaedro[N][N] = {0};

    // Cone
    cone[0][2] = 1;
    cone[1][1] = cone[1][2] = cone[1][3] = 1;
    for(int j=0; j<N; j++) cone[2][j] = 1;

    // Cruz
    for(int i=0; i<N; i++) cruz[i][2] = 1;
    for(int j=0; j<N; j++) cruz[2][j] = 1;

    // Octaedro
    octaedro[0][2] = 1;
    octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    // Exibir matrizes
    printf("Habilidade Cone:\n");
    imprimirMatriz(cone);

    printf("Habilidade Cruz:\n");
    imprimirMatriz(cruz);

    printf("Habilidade Octaedro:\n");
    imprimirMatriz(octaedro);

    return 0;
}
