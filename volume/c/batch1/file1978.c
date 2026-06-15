// fichero 1978 -- macros y constantes -- MODIFICADO
#define LIMITE_1978 2178
#define FACTOR_1978 5

int aplicar_limite1978(int valor) {
    if (valor > LIMITE_1978) return LIMITE_1978;
    return valor * FACTOR_1978;
}
