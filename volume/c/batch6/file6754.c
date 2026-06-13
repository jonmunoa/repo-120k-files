// fichero 6754 -- macros y constantes
#define LIMITE_6754 6854
#define FACTOR_6754 5

int aplicar_limite6754(int valor) {
    if (valor > LIMITE_6754) return LIMITE_6754;
    return valor * FACTOR_6754;
}
