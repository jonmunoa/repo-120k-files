// fichero 43258 -- macros y constantes -- MODIFICADO
#define LIMITE_43258 43458
#define FACTOR_43258 5

int aplicar_limite43258(int valor) {
    if (valor > LIMITE_43258) return LIMITE_43258;
    return valor * FACTOR_43258;
}
