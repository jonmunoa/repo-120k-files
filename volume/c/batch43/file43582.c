// fichero 43582 -- macros y constantes
#define LIMITE_43582 43682
#define FACTOR_43582 3

int aplicar_limite43582(int valor) {
    if (valor > LIMITE_43582) return LIMITE_43582;
    return valor * FACTOR_43582;
}
