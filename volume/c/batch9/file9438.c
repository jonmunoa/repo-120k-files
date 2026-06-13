// fichero 9438 -- macros y constantes
#define LIMITE_9438 9538
#define FACTOR_9438 4

int aplicar_limite9438(int valor) {
    if (valor > LIMITE_9438) return LIMITE_9438;
    return valor * FACTOR_9438;
}
