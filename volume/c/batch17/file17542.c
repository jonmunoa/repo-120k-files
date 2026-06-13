// fichero 17542 -- macros y constantes
#define LIMITE_17542 17642
#define FACTOR_17542 3

int aplicar_limite17542(int valor) {
    if (valor > LIMITE_17542) return LIMITE_17542;
    return valor * FACTOR_17542;
}
