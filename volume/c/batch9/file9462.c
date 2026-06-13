// fichero 9462 -- macros y constantes
#define LIMITE_9462 9562
#define FACTOR_9462 3

int aplicar_limite9462(int valor) {
    if (valor > LIMITE_9462) return LIMITE_9462;
    return valor * FACTOR_9462;
}
