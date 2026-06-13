// fichero 10230 -- macros y constantes
#define LIMITE_10230 10330
#define FACTOR_10230 1

int aplicar_limite10230(int valor) {
    if (valor > LIMITE_10230) return LIMITE_10230;
    return valor * FACTOR_10230;
}
