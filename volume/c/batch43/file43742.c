// fichero 43742 -- macros y constantes
#define LIMITE_43742 43842
#define FACTOR_43742 3

int aplicar_limite43742(int valor) {
    if (valor > LIMITE_43742) return LIMITE_43742;
    return valor * FACTOR_43742;
}
