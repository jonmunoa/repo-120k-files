// fichero 26630 -- macros y constantes -- MODIFICADO
#define LIMITE_26630 26830
#define FACTOR_26630 2

int aplicar_limite26630(int valor) {
    if (valor > LIMITE_26630) return LIMITE_26630;
    return valor * FACTOR_26630;
}
