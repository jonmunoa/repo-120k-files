// fichero 54754 -- macros y constantes
#define LIMITE_54754 54854
#define FACTOR_54754 5

int aplicar_limite54754(int valor) {
    if (valor > LIMITE_54754) return LIMITE_54754;
    return valor * FACTOR_54754;
}
