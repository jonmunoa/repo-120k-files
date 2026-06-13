// fichero 2306 -- macros y constantes
#define LIMITE_2306 2406
#define FACTOR_2306 2

int aplicar_limite2306(int valor) {
    if (valor > LIMITE_2306) return LIMITE_2306;
    return valor * FACTOR_2306;
}
