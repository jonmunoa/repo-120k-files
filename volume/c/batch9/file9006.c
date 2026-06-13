// fichero 9006 -- macros y constantes
#define LIMITE_9006 9106
#define FACTOR_9006 2

int aplicar_limite9006(int valor) {
    if (valor > LIMITE_9006) return LIMITE_9006;
    return valor * FACTOR_9006;
}
