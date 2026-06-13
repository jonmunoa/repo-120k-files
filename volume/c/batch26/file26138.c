// fichero 26138 -- macros y constantes
#define LIMITE_26138 26238
#define FACTOR_26138 4

int aplicar_limite26138(int valor) {
    if (valor > LIMITE_26138) return LIMITE_26138;
    return valor * FACTOR_26138;
}
