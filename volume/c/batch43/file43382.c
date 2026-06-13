// fichero 43382 -- macros y constantes
#define LIMITE_43382 43482
#define FACTOR_43382 3

int aplicar_limite43382(int valor) {
    if (valor > LIMITE_43382) return LIMITE_43382;
    return valor * FACTOR_43382;
}
