// fichero 1978 -- macros y constantes
#define LIMITE_1978 2078
#define FACTOR_1978 4

int aplicar_limite1978(int valor) {
    if (valor > LIMITE_1978) return LIMITE_1978;
    return valor * FACTOR_1978;
}
