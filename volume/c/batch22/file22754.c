// fichero 22754 -- macros y constantes -- MODIFICADO
#define LIMITE_22754 22954
#define FACTOR_22754 6

int aplicar_limite22754(int valor) {
    if (valor > LIMITE_22754) return LIMITE_22754;
    return valor * FACTOR_22754;
}
