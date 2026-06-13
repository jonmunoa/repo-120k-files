// fichero 5862 -- macros y constantes
#define LIMITE_5862 5962
#define FACTOR_5862 3

int aplicar_limite5862(int valor) {
    if (valor > LIMITE_5862) return LIMITE_5862;
    return valor * FACTOR_5862;
}
