// fichero 43270 -- macros y constantes
#define LIMITE_43270 43370
#define FACTOR_43270 1

int aplicar_limite43270(int valor) {
    if (valor > LIMITE_43270) return LIMITE_43270;
    return valor * FACTOR_43270;
}
