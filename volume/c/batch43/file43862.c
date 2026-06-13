// fichero 43862 -- macros y constantes
#define LIMITE_43862 43962
#define FACTOR_43862 3

int aplicar_limite43862(int valor) {
    if (valor > LIMITE_43862) return LIMITE_43862;
    return valor * FACTOR_43862;
}
