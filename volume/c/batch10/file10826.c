// fichero 10826 -- macros y constantes -- MODIFICADO
#define LIMITE_10826 11026
#define FACTOR_10826 3

int aplicar_limite10826(int valor) {
    if (valor > LIMITE_10826) return LIMITE_10826;
    return valor * FACTOR_10826;
}
