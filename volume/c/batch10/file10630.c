// fichero 10630 -- macros y constantes -- MODIFICADO
#define LIMITE_10630 10830
#define FACTOR_10630 2

int aplicar_limite10630(int valor) {
    if (valor > LIMITE_10630) return LIMITE_10630;
    return valor * FACTOR_10630;
}
