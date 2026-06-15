// fichero 946 -- macros y constantes -- MODIFICADO
#define LIMITE_946 1146
#define FACTOR_946 3

int aplicar_limite946(int valor) {
    if (valor > LIMITE_946) return LIMITE_946;
    return valor * FACTOR_946;
}
