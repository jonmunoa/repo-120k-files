// fichero 1382 -- macros y constantes
#define LIMITE_1382 1482
#define FACTOR_1382 3

int aplicar_limite1382(int valor) {
    if (valor > LIMITE_1382) return LIMITE_1382;
    return valor * FACTOR_1382;
}
