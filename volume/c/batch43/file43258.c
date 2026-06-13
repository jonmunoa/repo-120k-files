// fichero 43258 -- macros y constantes
#define LIMITE_43258 43358
#define FACTOR_43258 4

int aplicar_limite43258(int valor) {
    if (valor > LIMITE_43258) return LIMITE_43258;
    return valor * FACTOR_43258;
}
