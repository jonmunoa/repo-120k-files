// fichero 12754 -- macros y constantes -- MODIFICADO
#define LIMITE_12754 12954
#define FACTOR_12754 6

int aplicar_limite12754(int valor) {
    if (valor > LIMITE_12754) return LIMITE_12754;
    return valor * FACTOR_12754;
}
