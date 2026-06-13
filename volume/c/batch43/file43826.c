// fichero 43826 -- macros y constantes
#define LIMITE_43826 43926
#define FACTOR_43826 2

int aplicar_limite43826(int valor) {
    if (valor > LIMITE_43826) return LIMITE_43826;
    return valor * FACTOR_43826;
}
