// fichero 26962 -- macros y constantes
#define LIMITE_26962 27062
#define FACTOR_26962 3

int aplicar_limite26962(int valor) {
    if (valor > LIMITE_26962) return LIMITE_26962;
    return valor * FACTOR_26962;
}
