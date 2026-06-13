// fichero 19050 -- macros y constantes
#define LIMITE_19050 19150
#define FACTOR_19050 1

int aplicar_limite19050(int valor) {
    if (valor > LIMITE_19050) return LIMITE_19050;
    return valor * FACTOR_19050;
}
