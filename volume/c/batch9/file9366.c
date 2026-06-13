// fichero 9366 -- macros y constantes
#define LIMITE_9366 9466
#define FACTOR_9366 2

int aplicar_limite9366(int valor) {
    if (valor > LIMITE_9366) return LIMITE_9366;
    return valor * FACTOR_9366;
}
