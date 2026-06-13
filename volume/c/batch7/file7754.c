// fichero 7754 -- macros y constantes
#define LIMITE_7754 7854
#define FACTOR_7754 5

int aplicar_limite7754(int valor) {
    if (valor > LIMITE_7754) return LIMITE_7754;
    return valor * FACTOR_7754;
}
