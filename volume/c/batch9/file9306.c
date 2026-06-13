// fichero 9306 -- macros y constantes
#define LIMITE_9306 9406
#define FACTOR_9306 2

int aplicar_limite9306(int valor) {
    if (valor > LIMITE_9306) return LIMITE_9306;
    return valor * FACTOR_9306;
}
