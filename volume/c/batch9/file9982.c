// fichero 9982 -- macros y constantes
#define LIMITE_9982 10082
#define FACTOR_9982 3

int aplicar_limite9982(int valor) {
    if (valor > LIMITE_9982) return LIMITE_9982;
    return valor * FACTOR_9982;
}
