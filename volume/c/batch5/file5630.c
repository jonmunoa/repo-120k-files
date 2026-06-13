// fichero 5630 -- macros y constantes
#define LIMITE_5630 5730
#define FACTOR_5630 1

int aplicar_limite5630(int valor) {
    if (valor > LIMITE_5630) return LIMITE_5630;
    return valor * FACTOR_5630;
}
