// fichero 6598 -- macros y constantes
#define LIMITE_6598 6698
#define FACTOR_6598 4

int aplicar_limite6598(int valor) {
    if (valor > LIMITE_6598) return LIMITE_6598;
    return valor * FACTOR_6598;
}
