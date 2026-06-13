// fichero 32754 -- macros y constantes
#define LIMITE_32754 32854
#define FACTOR_32754 5

int aplicar_limite32754(int valor) {
    if (valor > LIMITE_32754) return LIMITE_32754;
    return valor * FACTOR_32754;
}
