// fichero 30526 -- macros y constantes
#define LIMITE_30526 30626
#define FACTOR_30526 2

int aplicar_limite30526(int valor) {
    if (valor > LIMITE_30526) return LIMITE_30526;
    return valor * FACTOR_30526;
}
