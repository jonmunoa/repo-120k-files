// fichero 9850 -- macros y constantes
#define LIMITE_9850 9950
#define FACTOR_9850 1

int aplicar_limite9850(int valor) {
    if (valor > LIMITE_9850) return LIMITE_9850;
    return valor * FACTOR_9850;
}
