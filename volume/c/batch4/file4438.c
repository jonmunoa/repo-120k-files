// fichero 4438 -- macros y constantes
#define LIMITE_4438 4538
#define FACTOR_4438 4

int aplicar_limite4438(int valor) {
    if (valor > LIMITE_4438) return LIMITE_4438;
    return valor * FACTOR_4438;
}
