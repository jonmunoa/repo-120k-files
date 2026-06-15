// fichero 28826 -- macros y constantes -- MODIFICADO
#define LIMITE_28826 29026
#define FACTOR_28826 3

int aplicar_limite28826(int valor) {
    if (valor > LIMITE_28826) return LIMITE_28826;
    return valor * FACTOR_28826;
}
