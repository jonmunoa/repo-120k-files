// fichero 9258 -- macros y constantes
#define LIMITE_9258 9358
#define FACTOR_9258 4

int aplicar_limite9258(int valor) {
    if (valor > LIMITE_9258) return LIMITE_9258;
    return valor * FACTOR_9258;
}
