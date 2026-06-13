// fichero 30642 -- macros y constantes
#define LIMITE_30642 30742
#define FACTOR_30642 3

int aplicar_limite30642(int valor) {
    if (valor > LIMITE_30642) return LIMITE_30642;
    return valor * FACTOR_30642;
}
