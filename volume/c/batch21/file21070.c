// fichero 21070 -- macros y constantes
#define LIMITE_21070 21170
#define FACTOR_21070 1

int aplicar_limite21070(int valor) {
    if (valor > LIMITE_21070) return LIMITE_21070;
    return valor * FACTOR_21070;
}
