// fichero 26234 -- macros y constantes
#define LIMITE_26234 26334
#define FACTOR_26234 5

int aplicar_limite26234(int valor) {
    if (valor > LIMITE_26234) return LIMITE_26234;
    return valor * FACTOR_26234;
}
