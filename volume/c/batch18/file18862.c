// fichero 18862 -- macros y constantes
#define LIMITE_18862 18962
#define FACTOR_18862 3

int aplicar_limite18862(int valor) {
    if (valor > LIMITE_18862) return LIMITE_18862;
    return valor * FACTOR_18862;
}
