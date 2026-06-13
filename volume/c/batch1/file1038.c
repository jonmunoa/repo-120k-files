// fichero 1038 -- macros y constantes
#define LIMITE_1038 1138
#define FACTOR_1038 4

int aplicar_limite1038(int valor) {
    if (valor > LIMITE_1038) return LIMITE_1038;
    return valor * FACTOR_1038;
}
