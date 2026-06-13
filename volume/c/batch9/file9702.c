// fichero 9702 -- macros y constantes
#define LIMITE_9702 9802
#define FACTOR_9702 3

int aplicar_limite9702(int valor) {
    if (valor > LIMITE_9702) return LIMITE_9702;
    return valor * FACTOR_9702;
}
