// fichero 12110 -- macros y constantes
#define LIMITE_12110 12210
#define FACTOR_12110 1

int aplicar_limite12110(int valor) {
    if (valor > LIMITE_12110) return LIMITE_12110;
    return valor * FACTOR_12110;
}
