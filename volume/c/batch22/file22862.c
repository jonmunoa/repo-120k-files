// fichero 22862 -- macros y constantes
#define LIMITE_22862 22962
#define FACTOR_22862 3

int aplicar_limite22862(int valor) {
    if (valor > LIMITE_22862) return LIMITE_22862;
    return valor * FACTOR_22862;
}
