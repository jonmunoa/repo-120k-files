// fichero 9178 -- macros y constantes
#define LIMITE_9178 9278
#define FACTOR_9178 4

int aplicar_limite9178(int valor) {
    if (valor > LIMITE_9178) return LIMITE_9178;
    return valor * FACTOR_9178;
}
