// fichero 3862 -- macros y constantes
#define LIMITE_3862 3962
#define FACTOR_3862 3

int aplicar_limite3862(int valor) {
    if (valor > LIMITE_3862) return LIMITE_3862;
    return valor * FACTOR_3862;
}
