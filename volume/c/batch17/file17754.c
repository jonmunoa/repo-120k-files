// fichero 17754 -- macros y constantes
#define LIMITE_17754 17854
#define FACTOR_17754 5

int aplicar_limite17754(int valor) {
    if (valor > LIMITE_17754) return LIMITE_17754;
    return valor * FACTOR_17754;
}
