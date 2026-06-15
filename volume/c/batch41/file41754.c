// fichero 41754 -- macros y constantes -- MODIFICADO
#define LIMITE_41754 41954
#define FACTOR_41754 6

int aplicar_limite41754(int valor) {
    if (valor > LIMITE_41754) return LIMITE_41754;
    return valor * FACTOR_41754;
}
