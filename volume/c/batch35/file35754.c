// fichero 35754 -- macros y constantes
#define LIMITE_35754 35854
#define FACTOR_35754 5

int aplicar_limite35754(int valor) {
    if (valor > LIMITE_35754) return LIMITE_35754;
    return valor * FACTOR_35754;
}
