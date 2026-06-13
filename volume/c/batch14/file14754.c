// fichero 14754 -- macros y constantes
#define LIMITE_14754 14854
#define FACTOR_14754 5

int aplicar_limite14754(int valor) {
    if (valor > LIMITE_14754) return LIMITE_14754;
    return valor * FACTOR_14754;
}
