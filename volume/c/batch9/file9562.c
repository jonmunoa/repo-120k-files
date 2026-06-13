// fichero 9562 -- macros y constantes
#define LIMITE_9562 9662
#define FACTOR_9562 3

int aplicar_limite9562(int valor) {
    if (valor > LIMITE_9562) return LIMITE_9562;
    return valor * FACTOR_9562;
}
