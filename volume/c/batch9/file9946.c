// fichero 9946 -- macros y constantes -- MODIFICADO
#define LIMITE_9946 10146
#define FACTOR_9946 3

int aplicar_limite9946(int valor) {
    if (valor > LIMITE_9946) return LIMITE_9946;
    return valor * FACTOR_9946;
}
