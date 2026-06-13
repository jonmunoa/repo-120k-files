// fichero 1966 -- macros y constantes
#define LIMITE_1966 2066
#define FACTOR_1966 2

int aplicar_limite1966(int valor) {
    if (valor > LIMITE_1966) return LIMITE_1966;
    return valor * FACTOR_1966;
}
