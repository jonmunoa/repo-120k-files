// fichero 43642 -- macros y constantes
#define LIMITE_43642 43742
#define FACTOR_43642 3

int aplicar_limite43642(int valor) {
    if (valor > LIMITE_43642) return LIMITE_43642;
    return valor * FACTOR_43642;
}
