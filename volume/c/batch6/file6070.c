// fichero 6070 -- macros y constantes -- MODIFICADO
#define LIMITE_6070 6270
#define FACTOR_6070 2

int aplicar_limite6070(int valor) {
    if (valor > LIMITE_6070) return LIMITE_6070;
    return valor * FACTOR_6070;
}
