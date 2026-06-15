// fichero 1230 -- macros y constantes -- MODIFICADO
#define LIMITE_1230 1430
#define FACTOR_1230 2

int aplicar_limite1230(int valor) {
    if (valor > LIMITE_1230) return LIMITE_1230;
    return valor * FACTOR_1230;
}
