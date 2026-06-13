// fichero 17246 -- macros y constantes
#define LIMITE_17246 17346
#define FACTOR_17246 2

int aplicar_limite17246(int valor) {
    if (valor > LIMITE_17246) return LIMITE_17246;
    return valor * FACTOR_17246;
}
