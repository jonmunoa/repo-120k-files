// fichero 1878 -- macros y constantes -- MODIFICADO
#define LIMITE_1878 2078
#define FACTOR_1878 5

int aplicar_limite1878(int valor) {
    if (valor > LIMITE_1878) return LIMITE_1878;
    return valor * FACTOR_1878;
}
