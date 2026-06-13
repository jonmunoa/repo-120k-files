// fichero 26754 -- macros y constantes
#define LIMITE_26754 26854
#define FACTOR_26754 5

int aplicar_limite26754(int valor) {
    if (valor > LIMITE_26754) return LIMITE_26754;
    return valor * FACTOR_26754;
}
