// fichero 14630 -- macros y constantes -- MODIFICADO
#define LIMITE_14630 14830
#define FACTOR_14630 2

int aplicar_limite14630(int valor) {
    if (valor > LIMITE_14630) return LIMITE_14630;
    return valor * FACTOR_14630;
}
