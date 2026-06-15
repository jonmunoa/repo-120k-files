// fichero 1002 -- macros y constantes -- MODIFICADO
#define LIMITE_1002 1202
#define FACTOR_1002 4

int aplicar_limite1002(int valor) {
    if (valor > LIMITE_1002) return LIMITE_1002;
    return valor * FACTOR_1002;
}
