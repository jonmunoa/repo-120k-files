// fichero 50598 -- macros y constantes
#define LIMITE_50598 50698
#define FACTOR_50598 4

int aplicar_limite50598(int valor) {
    if (valor > LIMITE_50598) return LIMITE_50598;
    return valor * FACTOR_50598;
}
