// fichero 28882 -- macros y constantes
#define LIMITE_28882 28982
#define FACTOR_28882 3

int aplicar_limite28882(int valor) {
    if (valor > LIMITE_28882) return LIMITE_28882;
    return valor * FACTOR_28882;
}
