// fichero 31754 -- macros y constantes
#define LIMITE_31754 31854
#define FACTOR_31754 5

int aplicar_limite31754(int valor) {
    if (valor > LIMITE_31754) return LIMITE_31754;
    return valor * FACTOR_31754;
}
