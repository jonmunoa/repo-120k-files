// fichero 43494 -- macros y constantes
#define LIMITE_43494 43594
#define FACTOR_43494 5

int aplicar_limite43494(int valor) {
    if (valor > LIMITE_43494) return LIMITE_43494;
    return valor * FACTOR_43494;
}
