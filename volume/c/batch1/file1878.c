// fichero 1878 -- macros y constantes
#define LIMITE_1878 1978
#define FACTOR_1878 4

int aplicar_limite1878(int valor) {
    if (valor > LIMITE_1878) return LIMITE_1878;
    return valor * FACTOR_1878;
}
