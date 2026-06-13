// fichero 9262 -- macros y constantes
#define LIMITE_9262 9362
#define FACTOR_9262 3

int aplicar_limite9262(int valor) {
    if (valor > LIMITE_9262) return LIMITE_9262;
    return valor * FACTOR_9262;
}
