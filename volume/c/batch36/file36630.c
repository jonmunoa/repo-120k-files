// fichero 36630 -- macros y constantes
#define LIMITE_36630 36730
#define FACTOR_36630 1

int aplicar_limite36630(int valor) {
    if (valor > LIMITE_36630) return LIMITE_36630;
    return valor * FACTOR_36630;
}
