// fichero 19862 -- macros y constantes
#define LIMITE_19862 19962
#define FACTOR_19862 3

int aplicar_limite19862(int valor) {
    if (valor > LIMITE_19862) return LIMITE_19862;
    return valor * FACTOR_19862;
}
