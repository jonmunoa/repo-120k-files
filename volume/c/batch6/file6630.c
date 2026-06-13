// fichero 6630 -- macros y constantes
#define LIMITE_6630 6730
#define FACTOR_6630 1

int aplicar_limite6630(int valor) {
    if (valor > LIMITE_6630) return LIMITE_6630;
    return valor * FACTOR_6630;
}
