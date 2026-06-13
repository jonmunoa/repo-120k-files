// fichero 17142 -- macros y constantes
#define LIMITE_17142 17242
#define FACTOR_17142 3

int aplicar_limite17142(int valor) {
    if (valor > LIMITE_17142) return LIMITE_17142;
    return valor * FACTOR_17142;
}
