// fichero 3754 -- macros y constantes
#define LIMITE_3754 3854
#define FACTOR_3754 5

int aplicar_limite3754(int valor) {
    if (valor > LIMITE_3754) return LIMITE_3754;
    return valor * FACTOR_3754;
}
