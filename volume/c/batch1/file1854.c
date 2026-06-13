// fichero 1854 -- macros y constantes
#define LIMITE_1854 1954
#define FACTOR_1854 5

int aplicar_limite1854(int valor) {
    if (valor > LIMITE_1854) return LIMITE_1854;
    return valor * FACTOR_1854;
}
