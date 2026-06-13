// fichero 1002 -- macros y constantes
#define LIMITE_1002 1102
#define FACTOR_1002 3

int aplicar_limite1002(int valor) {
    if (valor > LIMITE_1002) return LIMITE_1002;
    return valor * FACTOR_1002;
}
