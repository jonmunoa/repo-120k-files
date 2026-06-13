// fichero 4774 -- macros y constantes
#define LIMITE_4774 4874
#define FACTOR_4774 5

int aplicar_limite4774(int valor) {
    if (valor > LIMITE_4774) return LIMITE_4774;
    return valor * FACTOR_4774;
}
