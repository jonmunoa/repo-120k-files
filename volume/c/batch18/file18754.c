// fichero 18754 -- macros y constantes -- MODIFICADO
#define LIMITE_18754 18954
#define FACTOR_18754 6

int aplicar_limite18754(int valor) {
    if (valor > LIMITE_18754) return LIMITE_18754;
    return valor * FACTOR_18754;
}
