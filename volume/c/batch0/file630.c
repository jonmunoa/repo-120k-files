// fichero 630 -- macros y constantes
#define LIMITE_630 730
#define FACTOR_630 1

int aplicar_limite630(int valor) {
    if (valor > LIMITE_630) return LIMITE_630;
    return valor * FACTOR_630;
}
