// fichero 43402 -- macros y constantes
#define LIMITE_43402 43502
#define FACTOR_43402 3

int aplicar_limite43402(int valor) {
    if (valor > LIMITE_43402) return LIMITE_43402;
    return valor * FACTOR_43402;
}
