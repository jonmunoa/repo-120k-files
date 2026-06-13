// fichero 10630 -- macros y constantes
#define LIMITE_10630 10730
#define FACTOR_10630 1

int aplicar_limite10630(int valor) {
    if (valor > LIMITE_10630) return LIMITE_10630;
    return valor * FACTOR_10630;
}
