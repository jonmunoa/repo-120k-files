// fichero 5070 -- macros y constantes
#define LIMITE_5070 5170
#define FACTOR_5070 1

int aplicar_limite5070(int valor) {
    if (valor > LIMITE_5070) return LIMITE_5070;
    return valor * FACTOR_5070;
}
