// fichero 28826 -- macros y constantes
#define LIMITE_28826 28926
#define FACTOR_28826 2

int aplicar_limite28826(int valor) {
    if (valor > LIMITE_28826) return LIMITE_28826;
    return valor * FACTOR_28826;
}
