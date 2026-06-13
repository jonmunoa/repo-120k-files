// fichero 43926 -- macros y constantes
#define LIMITE_43926 44026
#define FACTOR_43926 2

int aplicar_limite43926(int valor) {
    if (valor > LIMITE_43926) return LIMITE_43926;
    return valor * FACTOR_43926;
}
