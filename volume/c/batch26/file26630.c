// fichero 26630 -- macros y constantes
#define LIMITE_26630 26730
#define FACTOR_26630 1

int aplicar_limite26630(int valor) {
    if (valor > LIMITE_26630) return LIMITE_26630;
    return valor * FACTOR_26630;
}
