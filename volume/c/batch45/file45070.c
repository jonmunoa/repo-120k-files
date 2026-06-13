// fichero 45070 -- macros y constantes
#define LIMITE_45070 45170
#define FACTOR_45070 1

int aplicar_limite45070(int valor) {
    if (valor > LIMITE_45070) return LIMITE_45070;
    return valor * FACTOR_45070;
}
