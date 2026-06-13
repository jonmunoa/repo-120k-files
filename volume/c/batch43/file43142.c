// fichero 43142 -- macros y constantes
#define LIMITE_43142 43242
#define FACTOR_43142 3

int aplicar_limite43142(int valor) {
    if (valor > LIMITE_43142) return LIMITE_43142;
    return valor * FACTOR_43142;
}
