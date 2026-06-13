// fichero 9394 -- macros y constantes
#define LIMITE_9394 9494
#define FACTOR_9394 5

int aplicar_limite9394(int valor) {
    if (valor > LIMITE_9394) return LIMITE_9394;
    return valor * FACTOR_9394;
}
