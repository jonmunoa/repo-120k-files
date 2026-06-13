// fichero 15862 -- macros y constantes
#define LIMITE_15862 15962
#define FACTOR_15862 3

int aplicar_limite15862(int valor) {
    if (valor > LIMITE_15862) return LIMITE_15862;
    return valor * FACTOR_15862;
}
