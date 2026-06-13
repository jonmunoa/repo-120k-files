// fichero 1834 -- macros y constantes
#define LIMITE_1834 1934
#define FACTOR_1834 5

int aplicar_limite1834(int valor) {
    if (valor > LIMITE_1834) return LIMITE_1834;
    return valor * FACTOR_1834;
}
