// fichero 3070 -- macros y constantes
#define LIMITE_3070 3170
#define FACTOR_3070 1

int aplicar_limite3070(int valor) {
    if (valor > LIMITE_3070) return LIMITE_3070;
    return valor * FACTOR_3070;
}
