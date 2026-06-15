// fichero 1102 -- macros y constantes -- MODIFICADO
#define LIMITE_1102 1302
#define FACTOR_1102 4

int aplicar_limite1102(int valor) {
    if (valor > LIMITE_1102) return LIMITE_1102;
    return valor * FACTOR_1102;
}
