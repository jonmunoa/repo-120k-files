// fichero 43774 -- macros y constantes
#define LIMITE_43774 43874
#define FACTOR_43774 5

int aplicar_limite43774(int valor) {
    if (valor > LIMITE_43774) return LIMITE_43774;
    return valor * FACTOR_43774;
}
