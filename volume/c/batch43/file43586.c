// fichero 43586 -- macros y constantes
#define LIMITE_43586 43686
#define FACTOR_43586 2

int aplicar_limite43586(int valor) {
    if (valor > LIMITE_43586) return LIMITE_43586;
    return valor * FACTOR_43586;
}
