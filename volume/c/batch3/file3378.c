// fichero 3378 -- macros y constantes
#define LIMITE_3378 3478
#define FACTOR_3378 4

int aplicar_limite3378(int valor) {
    if (valor > LIMITE_3378) return LIMITE_3378;
    return valor * FACTOR_3378;
}
