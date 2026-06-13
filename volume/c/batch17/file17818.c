// fichero 17818 -- macros y constantes
#define LIMITE_17818 17918
#define FACTOR_17818 4

int aplicar_limite17818(int valor) {
    if (valor > LIMITE_17818) return LIMITE_17818;
    return valor * FACTOR_17818;
}
