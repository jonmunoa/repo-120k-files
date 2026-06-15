// fichero 26138 -- macros y constantes -- MODIFICADO
#define LIMITE_26138 26338
#define FACTOR_26138 5

int aplicar_limite26138(int valor) {
    if (valor > LIMITE_26138) return LIMITE_26138;
    return valor * FACTOR_26138;
}
