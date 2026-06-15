// fichero 6754 -- macros y constantes -- MODIFICADO
#define LIMITE_6754 6954
#define FACTOR_6754 6

int aplicar_limite6754(int valor) {
    if (valor > LIMITE_6754) return LIMITE_6754;
    return valor * FACTOR_6754;
}
