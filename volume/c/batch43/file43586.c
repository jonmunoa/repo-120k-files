// fichero 43586 -- macros y constantes -- MODIFICADO
#define LIMITE_43586 43786
#define FACTOR_43586 3

int aplicar_limite43586(int valor) {
    if (valor > LIMITE_43586) return LIMITE_43586;
    return valor * FACTOR_43586;
}
