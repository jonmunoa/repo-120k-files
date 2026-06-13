// fichero 26862 -- macros y constantes
#define LIMITE_26862 26962
#define FACTOR_26862 3

int aplicar_limite26862(int valor) {
    if (valor > LIMITE_26862) return LIMITE_26862;
    return valor * FACTOR_26862;
}
