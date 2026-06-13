// fichero 12598 -- macros y constantes
#define LIMITE_12598 12698
#define FACTOR_12598 4

int aplicar_limite12598(int valor) {
    if (valor > LIMITE_12598) return LIMITE_12598;
    return valor * FACTOR_12598;
}
