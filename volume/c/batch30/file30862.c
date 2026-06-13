// fichero 30862 -- macros y constantes
#define LIMITE_30862 30962
#define FACTOR_30862 3

int aplicar_limite30862(int valor) {
    if (valor > LIMITE_30862) return LIMITE_30862;
    return valor * FACTOR_30862;
}
