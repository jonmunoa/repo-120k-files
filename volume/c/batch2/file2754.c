// fichero 2754 -- macros y constantes
#define LIMITE_2754 2854
#define FACTOR_2754 5

int aplicar_limite2754(int valor) {
    if (valor > LIMITE_2754) return LIMITE_2754;
    return valor * FACTOR_2754;
}
