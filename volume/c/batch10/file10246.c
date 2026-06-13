// fichero 10246 -- macros y constantes
#define LIMITE_10246 10346
#define FACTOR_10246 2

int aplicar_limite10246(int valor) {
    if (valor > LIMITE_10246) return LIMITE_10246;
    return valor * FACTOR_10246;
}
