// fichero 9938 -- macros y constantes
#define LIMITE_9938 10038
#define FACTOR_9938 4

int aplicar_limite9938(int valor) {
    if (valor > LIMITE_9938) return LIMITE_9938;
    return valor * FACTOR_9938;
}
