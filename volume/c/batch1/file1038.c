// fichero 1038 -- macros y constantes -- MODIFICADO
#define LIMITE_1038 1238
#define FACTOR_1038 5

int aplicar_limite1038(int valor) {
    if (valor > LIMITE_1038) return LIMITE_1038;
    return valor * FACTOR_1038;
}
