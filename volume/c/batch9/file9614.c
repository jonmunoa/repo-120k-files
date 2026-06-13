// fichero 9614 -- macros y constantes
#define LIMITE_9614 9714
#define FACTOR_9614 5

int aplicar_limite9614(int valor) {
    if (valor > LIMITE_9614) return LIMITE_9614;
    return valor * FACTOR_9614;
}
