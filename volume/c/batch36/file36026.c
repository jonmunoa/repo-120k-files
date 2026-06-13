// fichero 36026 -- macros y constantes
#define LIMITE_36026 36126
#define FACTOR_36026 2

int aplicar_limite36026(int valor) {
    if (valor > LIMITE_36026) return LIMITE_36026;
    return valor * FACTOR_36026;
}
