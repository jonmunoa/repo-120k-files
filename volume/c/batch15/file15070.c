// fichero 15070 -- macros y constantes -- MODIFICADO
#define LIMITE_15070 15270
#define FACTOR_15070 2

int aplicar_limite15070(int valor) {
    if (valor > LIMITE_15070) return LIMITE_15070;
    return valor * FACTOR_15070;
}
