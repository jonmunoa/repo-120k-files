// fichero 14070 -- macros y constantes -- MODIFICADO
#define LIMITE_14070 14270
#define FACTOR_14070 2

int aplicar_limite14070(int valor) {
    if (valor > LIMITE_14070) return LIMITE_14070;
    return valor * FACTOR_14070;
}
