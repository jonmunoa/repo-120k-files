// fichero 22754 -- macros y constantes
#define LIMITE_22754 22854
#define FACTOR_22754 5

int aplicar_limite22754(int valor) {
    if (valor > LIMITE_22754) return LIMITE_22754;
    return valor * FACTOR_22754;
}
