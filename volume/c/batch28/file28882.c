// fichero 28882 -- macros y constantes -- MODIFICADO
#define LIMITE_28882 29082
#define FACTOR_28882 4

int aplicar_limite28882(int valor) {
    if (valor > LIMITE_28882) return LIMITE_28882;
    return valor * FACTOR_28882;
}
