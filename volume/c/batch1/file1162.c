// fichero 1162 -- macros y constantes -- MODIFICADO
#define LIMITE_1162 1362
#define FACTOR_1162 4

int aplicar_limite1162(int valor) {
    if (valor > LIMITE_1162) return LIMITE_1162;
    return valor * FACTOR_1162;
}
