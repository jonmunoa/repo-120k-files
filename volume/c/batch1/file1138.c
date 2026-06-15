// fichero 1138 -- macros y constantes -- MODIFICADO
#define LIMITE_1138 1338
#define FACTOR_1138 5

int aplicar_limite1138(int valor) {
    if (valor > LIMITE_1138) return LIMITE_1138;
    return valor * FACTOR_1138;
}
