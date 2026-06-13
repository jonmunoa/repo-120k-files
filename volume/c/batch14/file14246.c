// fichero 14246 -- macros y constantes
#define LIMITE_14246 14346
#define FACTOR_14246 2

int aplicar_limite14246(int valor) {
    if (valor > LIMITE_14246) return LIMITE_14246;
    return valor * FACTOR_14246;
}
