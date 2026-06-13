// fichero 41754 -- macros y constantes
#define LIMITE_41754 41854
#define FACTOR_41754 5

int aplicar_limite41754(int valor) {
    if (valor > LIMITE_41754) return LIMITE_41754;
    return valor * FACTOR_41754;
}
