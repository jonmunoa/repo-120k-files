// fichero 32826 -- macros y constantes
#define LIMITE_32826 32926
#define FACTOR_32826 2

int aplicar_limite32826(int valor) {
    if (valor > LIMITE_32826) return LIMITE_32826;
    return valor * FACTOR_32826;
}
