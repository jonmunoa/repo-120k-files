// fichero 28598 -- macros y constantes
#define LIMITE_28598 28698
#define FACTOR_28598 4

int aplicar_limite28598(int valor) {
    if (valor > LIMITE_28598) return LIMITE_28598;
    return valor * FACTOR_28598;
}
