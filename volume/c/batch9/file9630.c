// fichero 9630 -- macros y constantes
#define LIMITE_9630 9730
#define FACTOR_9630 1

int aplicar_limite9630(int valor) {
    if (valor > LIMITE_9630) return LIMITE_9630;
    return valor * FACTOR_9630;
}
