// fichero 20754 -- macros y constantes
#define LIMITE_20754 20854
#define FACTOR_20754 5

int aplicar_limite20754(int valor) {
    if (valor > LIMITE_20754) return LIMITE_20754;
    return valor * FACTOR_20754;
}
