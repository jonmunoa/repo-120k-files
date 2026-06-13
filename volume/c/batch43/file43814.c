// fichero 43814 -- macros y constantes
#define LIMITE_43814 43914
#define FACTOR_43814 5

int aplicar_limite43814(int valor) {
    if (valor > LIMITE_43814) return LIMITE_43814;
    return valor * FACTOR_43814;
}
