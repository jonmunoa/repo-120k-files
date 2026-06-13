// fichero 43234 -- macros y constantes
#define LIMITE_43234 43334
#define FACTOR_43234 5

int aplicar_limite43234(int valor) {
    if (valor > LIMITE_43234) return LIMITE_43234;
    return valor * FACTOR_43234;
}
