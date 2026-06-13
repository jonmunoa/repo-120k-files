// fichero 43362 -- macros y constantes
#define LIMITE_43362 43462
#define FACTOR_43362 3

int aplicar_limite43362(int valor) {
    if (valor > LIMITE_43362) return LIMITE_43362;
    return valor * FACTOR_43362;
}
