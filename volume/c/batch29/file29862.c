// fichero 29862 -- macros y constantes
#define LIMITE_29862 29962
#define FACTOR_29862 3

int aplicar_limite29862(int valor) {
    if (valor > LIMITE_29862) return LIMITE_29862;
    return valor * FACTOR_29862;
}
