// fichero 5598 -- macros y constantes
#define LIMITE_5598 5698
#define FACTOR_5598 4

int aplicar_limite5598(int valor) {
    if (valor > LIMITE_5598) return LIMITE_5598;
    return valor * FACTOR_5598;
}
