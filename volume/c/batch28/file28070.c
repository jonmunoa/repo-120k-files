// fichero 28070 -- macros y constantes -- MODIFICADO
#define LIMITE_28070 28270
#define FACTOR_28070 2

int aplicar_limite28070(int valor) {
    if (valor > LIMITE_28070) return LIMITE_28070;
    return valor * FACTOR_28070;
}
