// fichero 1122 -- macros y constantes -- MODIFICADO
#define LIMITE_1122 1322
#define FACTOR_1122 4

int aplicar_limite1122(int valor) {
    if (valor > LIMITE_1122) return LIMITE_1122;
    return valor * FACTOR_1122;
}
