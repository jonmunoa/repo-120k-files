// fichero 1026 -- macros y constantes -- MODIFICADO
#define LIMITE_1026 1226
#define FACTOR_1026 3

int aplicar_limite1026(int valor) {
    if (valor > LIMITE_1026) return LIMITE_1026;
    return valor * FACTOR_1026;
}
