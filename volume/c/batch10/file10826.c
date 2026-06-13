// fichero 10826 -- macros y constantes
#define LIMITE_10826 10926
#define FACTOR_10826 2

int aplicar_limite10826(int valor) {
    if (valor > LIMITE_10826) return LIMITE_10826;
    return valor * FACTOR_10826;
}
