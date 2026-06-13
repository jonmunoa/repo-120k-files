// fichero 9802 -- macros y constantes
#define LIMITE_9802 9902
#define FACTOR_9802 3

int aplicar_limite9802(int valor) {
    if (valor > LIMITE_9802) return LIMITE_9802;
    return valor * FACTOR_9802;
}
