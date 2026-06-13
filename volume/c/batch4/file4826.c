// fichero 4826 -- macros y constantes
#define LIMITE_4826 4926
#define FACTOR_4826 2

int aplicar_limite4826(int valor) {
    if (valor > LIMITE_4826) return LIMITE_4826;
    return valor * FACTOR_4826;
}
