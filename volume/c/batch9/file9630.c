// fichero 9630 -- macros y constantes -- MODIFICADO
#define LIMITE_9630 9830
#define FACTOR_9630 2

int aplicar_limite9630(int valor) {
    if (valor > LIMITE_9630) return LIMITE_9630;
    return valor * FACTOR_9630;
}
