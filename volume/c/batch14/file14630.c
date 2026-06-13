// fichero 14630 -- macros y constantes
#define LIMITE_14630 14730
#define FACTOR_14630 1

int aplicar_limite14630(int valor) {
    if (valor > LIMITE_14630) return LIMITE_14630;
    return valor * FACTOR_14630;
}
