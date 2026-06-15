// fichero 43826 -- macros y constantes -- MODIFICADO
#define LIMITE_43826 44026
#define FACTOR_43826 3

int aplicar_limite43826(int valor) {
    if (valor > LIMITE_43826) return LIMITE_43826;
    return valor * FACTOR_43826;
}
