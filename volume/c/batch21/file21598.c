// fichero 21598 -- macros y constantes
#define LIMITE_21598 21698
#define FACTOR_21598 4

int aplicar_limite21598(int valor) {
    if (valor > LIMITE_21598) return LIMITE_21598;
    return valor * FACTOR_21598;
}
