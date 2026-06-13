// fichero 1398 -- macros y constantes
#define LIMITE_1398 1498
#define FACTOR_1398 4

int aplicar_limite1398(int valor) {
    if (valor > LIMITE_1398) return LIMITE_1398;
    return valor * FACTOR_1398;
}
