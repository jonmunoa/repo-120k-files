// fichero 36630 -- macros y constantes -- MODIFICADO
#define LIMITE_36630 36830
#define FACTOR_36630 2

int aplicar_limite36630(int valor) {
    if (valor > LIMITE_36630) return LIMITE_36630;
    return valor * FACTOR_36630;
}
