// fichero 18474 -- macros y constantes
#define LIMITE_18474 18574
#define FACTOR_18474 5

int aplicar_limite18474(int valor) {
    if (valor > LIMITE_18474) return LIMITE_18474;
    return valor * FACTOR_18474;
}
