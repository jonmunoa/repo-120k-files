// fichero 9050 -- macros y constantes
#define LIMITE_9050 9150
#define FACTOR_9050 1

int aplicar_limite9050(int valor) {
    if (valor > LIMITE_9050) return LIMITE_9050;
    return valor * FACTOR_9050;
}
