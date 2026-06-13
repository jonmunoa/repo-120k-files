// fichero 52862 -- macros y constantes
#define LIMITE_52862 52962
#define FACTOR_52862 3

int aplicar_limite52862(int valor) {
    if (valor > LIMITE_52862) return LIMITE_52862;
    return valor * FACTOR_52862;
}
