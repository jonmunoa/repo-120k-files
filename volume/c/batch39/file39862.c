// fichero 39862 -- macros y constantes
#define LIMITE_39862 39962
#define FACTOR_39862 3

int aplicar_limite39862(int valor) {
    if (valor > LIMITE_39862) return LIMITE_39862;
    return valor * FACTOR_39862;
}
