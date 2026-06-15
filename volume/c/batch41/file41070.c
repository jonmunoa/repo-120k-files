// fichero 41070 -- macros y constantes -- MODIFICADO
#define LIMITE_41070 41270
#define FACTOR_41070 2

int aplicar_limite41070(int valor) {
    if (valor > LIMITE_41070) return LIMITE_41070;
    return valor * FACTOR_41070;
}
