// fichero 9106 -- macros y constantes
#define LIMITE_9106 9206
#define FACTOR_9106 2

int aplicar_limite9106(int valor) {
    if (valor > LIMITE_9106) return LIMITE_9106;
    return valor * FACTOR_9106;
}
