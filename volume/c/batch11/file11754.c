// fichero 11754 -- macros y constantes
#define LIMITE_11754 11854
#define FACTOR_11754 5

int aplicar_limite11754(int valor) {
    if (valor > LIMITE_11754) return LIMITE_11754;
    return valor * FACTOR_11754;
}
