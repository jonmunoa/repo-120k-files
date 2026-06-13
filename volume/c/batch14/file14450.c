// fichero 14450 -- macros y constantes
#define LIMITE_14450 14550
#define FACTOR_14450 1

int aplicar_limite14450(int valor) {
    if (valor > LIMITE_14450) return LIMITE_14450;
    return valor * FACTOR_14450;
}
