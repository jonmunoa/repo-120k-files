// fichero 17142 -- macros y constantes -- MODIFICADO
#define LIMITE_17142 17342
#define FACTOR_17142 4

int aplicar_limite17142(int valor) {
    if (valor > LIMITE_17142) return LIMITE_17142;
    return valor * FACTOR_17142;
}
