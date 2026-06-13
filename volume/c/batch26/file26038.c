// fichero 26038 -- macros y constantes
#define LIMITE_26038 26138
#define FACTOR_26038 4

int aplicar_limite26038(int valor) {
    if (valor > LIMITE_26038) return LIMITE_26038;
    return valor * FACTOR_26038;
}
