// fichero 630 -- macros y constantes -- MODIFICADO
#define LIMITE_630 830
#define FACTOR_630 2

int aplicar_limite630(int valor) {
    if (valor > LIMITE_630) return LIMITE_630;
    return valor * FACTOR_630;
}
