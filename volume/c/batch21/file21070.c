// fichero 21070 -- macros y constantes -- MODIFICADO
#define LIMITE_21070 21270
#define FACTOR_21070 2

int aplicar_limite21070(int valor) {
    if (valor > LIMITE_21070) return LIMITE_21070;
    return valor * FACTOR_21070;
}
