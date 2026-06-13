// fichero 26742 -- macros y constantes
#define LIMITE_26742 26842
#define FACTOR_26742 3

int aplicar_limite26742(int valor) {
    if (valor > LIMITE_26742) return LIMITE_26742;
    return valor * FACTOR_26742;
}
