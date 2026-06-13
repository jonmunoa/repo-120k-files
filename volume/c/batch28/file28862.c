// fichero 28862 -- macros y constantes
#define LIMITE_28862 28962
#define FACTOR_28862 3

int aplicar_limite28862(int valor) {
    if (valor > LIMITE_28862) return LIMITE_28862;
    return valor * FACTOR_28862;
}
