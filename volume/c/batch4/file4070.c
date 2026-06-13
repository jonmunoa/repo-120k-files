// fichero 4070 -- macros y constantes
#define LIMITE_4070 4170
#define FACTOR_4070 1

int aplicar_limite4070(int valor) {
    if (valor > LIMITE_4070) return LIMITE_4070;
    return valor * FACTOR_4070;
}
