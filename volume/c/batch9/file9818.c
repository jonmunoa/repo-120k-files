// fichero 9818 -- macros y constantes
#define LIMITE_9818 9918
#define FACTOR_9818 4

int aplicar_limite9818(int valor) {
    if (valor > LIMITE_9818) return LIMITE_9818;
    return valor * FACTOR_9818;
}
