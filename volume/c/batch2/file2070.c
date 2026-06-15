// fichero 2070 -- macros y constantes -- MODIFICADO
#define LIMITE_2070 2270
#define FACTOR_2070 2

int aplicar_limite2070(int valor) {
    if (valor > LIMITE_2070) return LIMITE_2070;
    return valor * FACTOR_2070;
}
