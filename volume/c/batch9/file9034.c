// fichero 9034 -- macros y constantes
#define LIMITE_9034 9134
#define FACTOR_9034 5

int aplicar_limite9034(int valor) {
    if (valor > LIMITE_9034) return LIMITE_9034;
    return valor * FACTOR_9034;
}
