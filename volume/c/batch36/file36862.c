// fichero 36862 -- macros y constantes
#define LIMITE_36862 36962
#define FACTOR_36862 3

int aplicar_limite36862(int valor) {
    if (valor > LIMITE_36862) return LIMITE_36862;
    return valor * FACTOR_36862;
}
