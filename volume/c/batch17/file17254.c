// fichero 17254 -- macros y constantes
#define LIMITE_17254 17354
#define FACTOR_17254 5

int aplicar_limite17254(int valor) {
    if (valor > LIMITE_17254) return LIMITE_17254;
    return valor * FACTOR_17254;
}
