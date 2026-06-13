// fichero 9362 -- macros y constantes
#define LIMITE_9362 9462
#define FACTOR_9362 3

int aplicar_limite9362(int valor) {
    if (valor > LIMITE_9362) return LIMITE_9362;
    return valor * FACTOR_9362;
}
