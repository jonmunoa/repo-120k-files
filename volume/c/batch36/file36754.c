// fichero 36754 -- macros y constantes -- MODIFICADO
#define LIMITE_36754 36954
#define FACTOR_36754 6

int aplicar_limite36754(int valor) {
    if (valor > LIMITE_36754) return LIMITE_36754;
    return valor * FACTOR_36754;
}
