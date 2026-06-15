// fichero 7754 -- macros y constantes -- MODIFICADO
#define LIMITE_7754 7954
#define FACTOR_7754 6

int aplicar_limite7754(int valor) {
    if (valor > LIMITE_7754) return LIMITE_7754;
    return valor * FACTOR_7754;
}
