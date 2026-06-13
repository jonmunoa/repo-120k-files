// fichero 43602 -- macros y constantes
#define LIMITE_43602 43702
#define FACTOR_43602 3

int aplicar_limite43602(int valor) {
    if (valor > LIMITE_43602) return LIMITE_43602;
    return valor * FACTOR_43602;
}
