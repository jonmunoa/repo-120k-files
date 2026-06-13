// fichero 9466 -- macros y constantes
#define LIMITE_9466 9566
#define FACTOR_9466 2

int aplicar_limite9466(int valor) {
    if (valor > LIMITE_9466) return LIMITE_9466;
    return valor * FACTOR_9466;
}
