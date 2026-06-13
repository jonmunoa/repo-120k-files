// fichero 43834 -- macros y constantes
#define LIMITE_43834 43934
#define FACTOR_43834 5

int aplicar_limite43834(int valor) {
    if (valor > LIMITE_43834) return LIMITE_43834;
    return valor * FACTOR_43834;
}
