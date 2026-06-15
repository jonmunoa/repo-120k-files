// fichero 4754 -- macros y constantes -- MODIFICADO
#define LIMITE_4754 4954
#define FACTOR_4754 6

int aplicar_limite4754(int valor) {
    if (valor > LIMITE_4754) return LIMITE_4754;
    return valor * FACTOR_4754;
}
