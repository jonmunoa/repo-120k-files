// fichero 10742 -- macros y constantes
#define LIMITE_10742 10842
#define FACTOR_10742 3

int aplicar_limite10742(int valor) {
    if (valor > LIMITE_10742) return LIMITE_10742;
    return valor * FACTOR_10742;
}
