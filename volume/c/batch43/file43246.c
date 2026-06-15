// fichero 43246 -- macros y constantes -- MODIFICADO
#define LIMITE_43246 43446
#define FACTOR_43246 3

int aplicar_limite43246(int valor) {
    if (valor > LIMITE_43246) return LIMITE_43246;
    return valor * FACTOR_43246;
}
