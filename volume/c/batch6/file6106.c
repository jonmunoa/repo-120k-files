// fichero 6106 -- macros y constantes
#define LIMITE_6106 6206
#define FACTOR_6106 2

int aplicar_limite6106(int valor) {
    if (valor > LIMITE_6106) return LIMITE_6106;
    return valor * FACTOR_6106;
}
