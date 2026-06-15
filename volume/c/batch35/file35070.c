// fichero 35070 -- macros y constantes -- MODIFICADO
#define LIMITE_35070 35270
#define FACTOR_35070 2

int aplicar_limite35070(int valor) {
    if (valor > LIMITE_35070) return LIMITE_35070;
    return valor * FACTOR_35070;
}
