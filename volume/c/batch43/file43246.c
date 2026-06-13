// fichero 43246 -- macros y constantes
#define LIMITE_43246 43346
#define FACTOR_43246 2

int aplicar_limite43246(int valor) {
    if (valor > LIMITE_43246) return LIMITE_43246;
    return valor * FACTOR_43246;
}
