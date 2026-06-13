// fichero 33862 -- macros y constantes
#define LIMITE_33862 33962
#define FACTOR_33862 3

int aplicar_limite33862(int valor) {
    if (valor > LIMITE_33862) return LIMITE_33862;
    return valor * FACTOR_33862;
}
