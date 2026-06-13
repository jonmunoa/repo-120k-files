// fichero 20862 -- macros y constantes
#define LIMITE_20862 20962
#define FACTOR_20862 3

int aplicar_limite20862(int valor) {
    if (valor > LIMITE_20862) return LIMITE_20862;
    return valor * FACTOR_20862;
}
