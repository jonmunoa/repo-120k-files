// fichero 14754 -- macros y constantes -- MODIFICADO
#define LIMITE_14754 14954
#define FACTOR_14754 6

int aplicar_limite14754(int valor) {
    if (valor > LIMITE_14754) return LIMITE_14754;
    return valor * FACTOR_14754;
}
