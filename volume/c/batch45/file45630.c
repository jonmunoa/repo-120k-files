// fichero 45630 -- macros y constantes
#define LIMITE_45630 45730
#define FACTOR_45630 1

int aplicar_limite45630(int valor) {
    if (valor > LIMITE_45630) return LIMITE_45630;
    return valor * FACTOR_45630;
}
