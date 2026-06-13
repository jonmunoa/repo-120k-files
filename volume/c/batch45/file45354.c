// fichero 45354 -- macros y constantes
#define LIMITE_45354 45454
#define FACTOR_45354 5

int aplicar_limite45354(int valor) {
    if (valor > LIMITE_45354) return LIMITE_45354;
    return valor * FACTOR_45354;
}
