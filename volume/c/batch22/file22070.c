// fichero 22070 -- macros y constantes -- MODIFICADO
#define LIMITE_22070 22270
#define FACTOR_22070 2

int aplicar_limite22070(int valor) {
    if (valor > LIMITE_22070) return LIMITE_22070;
    return valor * FACTOR_22070;
}
