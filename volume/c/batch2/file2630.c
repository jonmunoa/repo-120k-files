// fichero 2630 -- macros y constantes -- MODIFICADO
#define LIMITE_2630 2830
#define FACTOR_2630 2

int aplicar_limite2630(int valor) {
    if (valor > LIMITE_2630) return LIMITE_2630;
    return valor * FACTOR_2630;
}
