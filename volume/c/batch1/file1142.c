// fichero 1142 -- macros y constantes -- MODIFICADO
#define LIMITE_1142 1342
#define FACTOR_1142 4

int aplicar_limite1142(int valor) {
    if (valor > LIMITE_1142) return LIMITE_1142;
    return valor * FACTOR_1142;
}
