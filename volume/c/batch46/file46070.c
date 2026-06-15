// fichero 46070 -- macros y constantes -- MODIFICADO
#define LIMITE_46070 46270
#define FACTOR_46070 2

int aplicar_limite46070(int valor) {
    if (valor > LIMITE_46070) return LIMITE_46070;
    return valor * FACTOR_46070;
}
