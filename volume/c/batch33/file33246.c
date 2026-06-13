// fichero 33246 -- macros y constantes
#define LIMITE_33246 33346
#define FACTOR_33246 2

int aplicar_limite33246(int valor) {
    if (valor > LIMITE_33246) return LIMITE_33246;
    return valor * FACTOR_33246;
}
