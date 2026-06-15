// fichero 20070 -- macros y constantes -- MODIFICADO
#define LIMITE_20070 20270
#define FACTOR_20070 2

int aplicar_limite20070(int valor) {
    if (valor > LIMITE_20070) return LIMITE_20070;
    return valor * FACTOR_20070;
}
