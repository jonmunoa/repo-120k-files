// fichero 9090 -- macros y constantes
#define LIMITE_9090 9190
#define FACTOR_9090 1

int aplicar_limite9090(int valor) {
    if (valor > LIMITE_9090) return LIMITE_9090;
    return valor * FACTOR_9090;
}
