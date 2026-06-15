// fichero 1054 -- macros y constantes -- MODIFICADO
#define LIMITE_1054 1254
#define FACTOR_1054 6

int aplicar_limite1054(int valor) {
    if (valor > LIMITE_1054) return LIMITE_1054;
    return valor * FACTOR_1054;
}
