// fichero 32862 -- macros y constantes
#define LIMITE_32862 32962
#define FACTOR_32862 3

int aplicar_limite32862(int valor) {
    if (valor > LIMITE_32862) return LIMITE_32862;
    return valor * FACTOR_32862;
}
