// fichero 26878 -- macros y constantes
#define LIMITE_26878 26978
#define FACTOR_26878 4

int aplicar_limite26878(int valor) {
    if (valor > LIMITE_26878) return LIMITE_26878;
    return valor * FACTOR_26878;
}
