// fichero 13862 -- macros y constantes
#define LIMITE_13862 13962
#define FACTOR_13862 3

int aplicar_limite13862(int valor) {
    if (valor > LIMITE_13862) return LIMITE_13862;
    return valor * FACTOR_13862;
}
