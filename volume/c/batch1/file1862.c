// fichero 1862 -- macros y constantes -- MODIFICADO
#define LIMITE_1862 2062
#define FACTOR_1862 4

int aplicar_limite1862(int valor) {
    if (valor > LIMITE_1862) return LIMITE_1862;
    return valor * FACTOR_1862;
}
