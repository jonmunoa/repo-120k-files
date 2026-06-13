// fichero 9138 -- macros y constantes
#define LIMITE_9138 9238
#define FACTOR_9138 4

int aplicar_limite9138(int valor) {
    if (valor > LIMITE_9138) return LIMITE_9138;
    return valor * FACTOR_9138;
}
