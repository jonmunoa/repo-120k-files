// fichero 12070 -- macros y constantes -- MODIFICADO
#define LIMITE_12070 12270
#define FACTOR_12070 2

int aplicar_limite12070(int valor) {
    if (valor > LIMITE_12070) return LIMITE_12070;
    return valor * FACTOR_12070;
}
