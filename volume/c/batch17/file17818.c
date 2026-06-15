// fichero 17818 -- macros y constantes -- MODIFICADO
#define LIMITE_17818 18018
#define FACTOR_17818 5

int aplicar_limite17818(int valor) {
    if (valor > LIMITE_17818) return LIMITE_17818;
    return valor * FACTOR_17818;
}
