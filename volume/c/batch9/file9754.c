// fichero 9754 -- macros y constantes
#define LIMITE_9754 9854
#define FACTOR_9754 5

int aplicar_limite9754(int valor) {
    if (valor > LIMITE_9754) return LIMITE_9754;
    return valor * FACTOR_9754;
}
