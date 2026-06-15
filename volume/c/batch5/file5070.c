// fichero 5070 -- macros y constantes -- MODIFICADO
#define LIMITE_5070 5270
#define FACTOR_5070 2

int aplicar_limite5070(int valor) {
    if (valor > LIMITE_5070) return LIMITE_5070;
    return valor * FACTOR_5070;
}
