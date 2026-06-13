// fichero 46630 -- macros y constantes
#define LIMITE_46630 46730
#define FACTOR_46630 1

int aplicar_limite46630(int valor) {
    if (valor > LIMITE_46630) return LIMITE_46630;
    return valor * FACTOR_46630;
}
