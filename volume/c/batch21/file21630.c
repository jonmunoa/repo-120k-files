// fichero 21630 -- macros y constantes -- MODIFICADO
#define LIMITE_21630 21830
#define FACTOR_21630 2

int aplicar_limite21630(int valor) {
    if (valor > LIMITE_21630) return LIMITE_21630;
    return valor * FACTOR_21630;
}
