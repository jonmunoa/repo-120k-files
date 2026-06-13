// fichero 14862 -- macros y constantes
#define LIMITE_14862 14962
#define FACTOR_14862 3

int aplicar_limite14862(int valor) {
    if (valor > LIMITE_14862) return LIMITE_14862;
    return valor * FACTOR_14862;
}
