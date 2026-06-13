// fichero 52270 -- macros y constantes
#define LIMITE_52270 52370
#define FACTOR_52270 1

int aplicar_limite52270(int valor) {
    if (valor > LIMITE_52270) return LIMITE_52270;
    return valor * FACTOR_52270;
}
