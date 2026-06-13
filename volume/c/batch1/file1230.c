// fichero 1230 -- macros y constantes
#define LIMITE_1230 1330
#define FACTOR_1230 1

int aplicar_limite1230(int valor) {
    if (valor > LIMITE_1230) return LIMITE_1230;
    return valor * FACTOR_1230;
}
