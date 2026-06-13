// fichero 30230 -- macros y constantes
#define LIMITE_30230 30330
#define FACTOR_30230 1

int aplicar_limite30230(int valor) {
    if (valor > LIMITE_30230) return LIMITE_30230;
    return valor * FACTOR_30230;
}
