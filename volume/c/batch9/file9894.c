// fichero 9894 -- macros y constantes
#define LIMITE_9894 9994
#define FACTOR_9894 5

int aplicar_limite9894(int valor) {
    if (valor > LIMITE_9894) return LIMITE_9894;
    return valor * FACTOR_9894;
}
