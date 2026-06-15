// fichero 45070 -- macros y constantes -- MODIFICADO
#define LIMITE_45070 45270
#define FACTOR_45070 2

int aplicar_limite45070(int valor) {
    if (valor > LIMITE_45070) return LIMITE_45070;
    return valor * FACTOR_45070;
}
