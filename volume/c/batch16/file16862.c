// fichero 16862 -- macros y constantes
#define LIMITE_16862 16962
#define FACTOR_16862 3

int aplicar_limite16862(int valor) {
    if (valor > LIMITE_16862) return LIMITE_16862;
    return valor * FACTOR_16862;
}
