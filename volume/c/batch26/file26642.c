// fichero 26642 -- macros y constantes
#define LIMITE_26642 26742
#define FACTOR_26642 3

int aplicar_limite26642(int valor) {
    if (valor > LIMITE_26642) return LIMITE_26642;
    return valor * FACTOR_26642;
}
