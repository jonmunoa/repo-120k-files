// fichero 3754 -- macros y constantes -- MODIFICADO
#define LIMITE_3754 3954
#define FACTOR_3754 6

int aplicar_limite3754(int valor) {
    if (valor > LIMITE_3754) return LIMITE_3754;
    return valor * FACTOR_3754;
}
