// fichero 18774 -- macros y constantes
#define LIMITE_18774 18874
#define FACTOR_18774 5

int aplicar_limite18774(int valor) {
    if (valor > LIMITE_18774) return LIMITE_18774;
    return valor * FACTOR_18774;
}
