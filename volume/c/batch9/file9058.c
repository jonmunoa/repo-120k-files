// fichero 9058 -- macros y constantes
#define LIMITE_9058 9158
#define FACTOR_9058 4

int aplicar_limite9058(int valor) {
    if (valor > LIMITE_9058) return LIMITE_9058;
    return valor * FACTOR_9058;
}
