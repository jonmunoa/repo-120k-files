// fichero 10642 -- macros y constantes
#define LIMITE_10642 10742
#define FACTOR_10642 3

int aplicar_limite10642(int valor) {
    if (valor > LIMITE_10642) return LIMITE_10642;
    return valor * FACTOR_10642;
}
