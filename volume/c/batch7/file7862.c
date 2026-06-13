// fichero 7862 -- macros y constantes
#define LIMITE_7862 7962
#define FACTOR_7862 3

int aplicar_limite7862(int valor) {
    if (valor > LIMITE_7862) return LIMITE_7862;
    return valor * FACTOR_7862;
}
