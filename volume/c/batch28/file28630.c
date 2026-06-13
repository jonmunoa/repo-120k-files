// fichero 28630 -- macros y constantes
#define LIMITE_28630 28730
#define FACTOR_28630 1

int aplicar_limite28630(int valor) {
    if (valor > LIMITE_28630) return LIMITE_28630;
    return valor * FACTOR_28630;
}
