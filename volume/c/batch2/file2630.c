// fichero 2630 -- macros y constantes
#define LIMITE_2630 2730
#define FACTOR_2630 1

int aplicar_limite2630(int valor) {
    if (valor > LIMITE_2630) return LIMITE_2630;
    return valor * FACTOR_2630;
}
