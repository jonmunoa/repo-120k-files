// fichero 43166 -- macros y constantes
#define LIMITE_43166 43266
#define FACTOR_43166 2

int aplicar_limite43166(int valor) {
    if (valor > LIMITE_43166) return LIMITE_43166;
    return valor * FACTOR_43166;
}
