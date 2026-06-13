// fichero 30110 -- macros y constantes
#define LIMITE_30110 30210
#define FACTOR_30110 1

int aplicar_limite30110(int valor) {
    if (valor > LIMITE_30110) return LIMITE_30110;
    return valor * FACTOR_30110;
}
