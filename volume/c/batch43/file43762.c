// fichero 43762 -- macros y constantes
#define LIMITE_43762 43862
#define FACTOR_43762 3

int aplicar_limite43762(int valor) {
    if (valor > LIMITE_43762) return LIMITE_43762;
    return valor * FACTOR_43762;
}
