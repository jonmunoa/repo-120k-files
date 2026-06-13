// fichero 1994 -- macros y constantes
#define LIMITE_1994 2094
#define FACTOR_1994 5

int aplicar_limite1994(int valor) {
    if (valor > LIMITE_1994) return LIMITE_1994;
    return valor * FACTOR_1994;
}
