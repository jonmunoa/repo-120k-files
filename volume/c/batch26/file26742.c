// fichero 26742 -- macros y constantes -- MODIFICADO
#define LIMITE_26742 26942
#define FACTOR_26742 4

int aplicar_limite26742(int valor) {
    if (valor > LIMITE_26742) return LIMITE_26742;
    return valor * FACTOR_26742;
}
