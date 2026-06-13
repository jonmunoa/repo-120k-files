// fichero 30754 -- macros y constantes
#define LIMITE_30754 30854
#define FACTOR_30754 5

int aplicar_limite30754(int valor) {
    if (valor > LIMITE_30754) return LIMITE_30754;
    return valor * FACTOR_30754;
}
