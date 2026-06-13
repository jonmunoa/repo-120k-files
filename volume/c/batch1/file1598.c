// fichero 1598 -- macros y constantes
#define LIMITE_1598 1698
#define FACTOR_1598 4

int aplicar_limite1598(int valor) {
    if (valor > LIMITE_1598) return LIMITE_1598;
    return valor * FACTOR_1598;
}
