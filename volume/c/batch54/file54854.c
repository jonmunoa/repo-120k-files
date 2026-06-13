// fichero 54854 -- macros y constantes
#define LIMITE_54854 54954
#define FACTOR_54854 5

int aplicar_limite54854(int valor) {
    if (valor > LIMITE_54854) return LIMITE_54854;
    return valor * FACTOR_54854;
}
