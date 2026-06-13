// fichero 1142 -- macros y constantes
#define LIMITE_1142 1242
#define FACTOR_1142 3

int aplicar_limite1142(int valor) {
    if (valor > LIMITE_1142) return LIMITE_1142;
    return valor * FACTOR_1142;
}
