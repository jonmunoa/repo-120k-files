// fichero 43354 -- macros y constantes
#define LIMITE_43354 43454
#define FACTOR_43354 5

int aplicar_limite43354(int valor) {
    if (valor > LIMITE_43354) return LIMITE_43354;
    return valor * FACTOR_43354;
}
