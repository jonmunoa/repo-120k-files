// fichero 54238 -- macros y constantes
#define LIMITE_54238 54338
#define FACTOR_54238 4

int aplicar_limite54238(int valor) {
    if (valor > LIMITE_54238) return LIMITE_54238;
    return valor * FACTOR_54238;
}
