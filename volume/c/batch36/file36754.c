// fichero 36754 -- macros y constantes
#define LIMITE_36754 36854
#define FACTOR_36754 5

int aplicar_limite36754(int valor) {
    if (valor > LIMITE_36754) return LIMITE_36754;
    return valor * FACTOR_36754;
}
