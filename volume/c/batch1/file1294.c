// fichero 1294 -- macros y constantes
#define LIMITE_1294 1394
#define FACTOR_1294 5

int aplicar_limite1294(int valor) {
    if (valor > LIMITE_1294) return LIMITE_1294;
    return valor * FACTOR_1294;
}
