// fichero 9830 -- macros y constantes
#define LIMITE_9830 9930
#define FACTOR_9830 1

int aplicar_limite9830(int valor) {
    if (valor > LIMITE_9830) return LIMITE_9830;
    return valor * FACTOR_9830;
}
