// fichero 50382 -- macros y constantes
#define LIMITE_50382 50482
#define FACTOR_50382 3

int aplicar_limite50382(int valor) {
    if (valor > LIMITE_50382) return LIMITE_50382;
    return valor * FACTOR_50382;
}
