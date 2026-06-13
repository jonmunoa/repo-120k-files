// fichero 5754 -- macros y constantes
#define LIMITE_5754 5854
#define FACTOR_5754 5

int aplicar_limite5754(int valor) {
    if (valor > LIMITE_5754) return LIMITE_5754;
    return valor * FACTOR_5754;
}
