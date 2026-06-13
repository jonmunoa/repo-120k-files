// fichero 43126 -- macros y constantes
#define LIMITE_43126 43226
#define FACTOR_43126 2

int aplicar_limite43126(int valor) {
    if (valor > LIMITE_43126) return LIMITE_43126;
    return valor * FACTOR_43126;
}
