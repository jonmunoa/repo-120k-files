// fichero 50754 -- macros y constantes
#define LIMITE_50754 50854
#define FACTOR_50754 5

int aplicar_limite50754(int valor) {
    if (valor > LIMITE_50754) return LIMITE_50754;
    return valor * FACTOR_50754;
}
