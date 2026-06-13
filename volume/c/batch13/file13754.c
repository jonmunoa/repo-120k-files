// fichero 13754 -- macros y constantes
#define LIMITE_13754 13854
#define FACTOR_13754 5

int aplicar_limite13754(int valor) {
    if (valor > LIMITE_13754) return LIMITE_13754;
    return valor * FACTOR_13754;
}
