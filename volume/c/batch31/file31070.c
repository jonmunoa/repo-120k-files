// fichero 31070 -- macros y constantes -- MODIFICADO
#define LIMITE_31070 31270
#define FACTOR_31070 2

int aplicar_limite31070(int valor) {
    if (valor > LIMITE_31070) return LIMITE_31070;
    return valor * FACTOR_31070;
}
