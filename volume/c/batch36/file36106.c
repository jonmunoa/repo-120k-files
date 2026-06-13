// fichero 36106 -- macros y constantes
#define LIMITE_36106 36206
#define FACTOR_36106 2

int aplicar_limite36106(int valor) {
    if (valor > LIMITE_36106) return LIMITE_36106;
    return valor * FACTOR_36106;
}
