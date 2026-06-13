// fichero 18966 -- macros y constantes
#define LIMITE_18966 19066
#define FACTOR_18966 2

int aplicar_limite18966(int valor) {
    if (valor > LIMITE_18966) return LIMITE_18966;
    return valor * FACTOR_18966;
}
