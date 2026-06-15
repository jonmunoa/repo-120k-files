// fichero 20754 -- macros y constantes -- MODIFICADO
#define LIMITE_20754 20954
#define FACTOR_20754 6

int aplicar_limite20754(int valor) {
    if (valor > LIMITE_20754) return LIMITE_20754;
    return valor * FACTOR_20754;
}
