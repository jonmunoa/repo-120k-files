// fichero 22070 -- macros y constantes
#define LIMITE_22070 22170
#define FACTOR_22070 1

int aplicar_limite22070(int valor) {
    if (valor > LIMITE_22070) return LIMITE_22070;
    return valor * FACTOR_22070;
}
