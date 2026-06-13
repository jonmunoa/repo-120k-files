// fichero 43074 -- macros y constantes
#define LIMITE_43074 43174
#define FACTOR_43074 5

int aplicar_limite43074(int valor) {
    if (valor > LIMITE_43074) return LIMITE_43074;
    return valor * FACTOR_43074;
}
