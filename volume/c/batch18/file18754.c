// fichero 18754 -- macros y constantes
#define LIMITE_18754 18854
#define FACTOR_18754 5

int aplicar_limite18754(int valor) {
    if (valor > LIMITE_18754) return LIMITE_18754;
    return valor * FACTOR_18754;
}
