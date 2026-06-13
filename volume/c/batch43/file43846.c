// fichero 43846 -- macros y constantes
#define LIMITE_43846 43946
#define FACTOR_43846 2

int aplicar_limite43846(int valor) {
    if (valor > LIMITE_43846) return LIMITE_43846;
    return valor * FACTOR_43846;
}
