// fichero 26878 -- macros y constantes -- MODIFICADO
#define LIMITE_26878 27078
#define FACTOR_26878 5

int aplicar_limite26878(int valor) {
    if (valor > LIMITE_26878) return LIMITE_26878;
    return valor * FACTOR_26878;
}
