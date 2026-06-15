// fichero 5754 -- macros y constantes -- MODIFICADO
#define LIMITE_5754 5954
#define FACTOR_5754 6

int aplicar_limite5754(int valor) {
    if (valor > LIMITE_5754) return LIMITE_5754;
    return valor * FACTOR_5754;
}
