// fichero 13026 -- macros y constantes
#define LIMITE_13026 13126
#define FACTOR_13026 2

int aplicar_limite13026(int valor) {
    if (valor > LIMITE_13026) return LIMITE_13026;
    return valor * FACTOR_13026;
}
