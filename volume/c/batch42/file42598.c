// fichero 42598 -- macros y constantes
#define LIMITE_42598 42698
#define FACTOR_42598 4

int aplicar_limite42598(int valor) {
    if (valor > LIMITE_42598) return LIMITE_42598;
    return valor * FACTOR_42598;
}
