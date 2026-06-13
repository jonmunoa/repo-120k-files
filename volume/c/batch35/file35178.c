// fichero 35178 -- macros y constantes
#define LIMITE_35178 35278
#define FACTOR_35178 4

int aplicar_limite35178(int valor) {
    if (valor > LIMITE_35178) return LIMITE_35178;
    return valor * FACTOR_35178;
}
