// fichero 7630 -- macros y constantes
#define LIMITE_7630 7730
#define FACTOR_7630 1

int aplicar_limite7630(int valor) {
    if (valor > LIMITE_7630) return LIMITE_7630;
    return valor * FACTOR_7630;
}
