// fichero 6462 -- macros y constantes
#define LIMITE_6462 6562
#define FACTOR_6462 3

int aplicar_limite6462(int valor) {
    if (valor > LIMITE_6462) return LIMITE_6462;
    return valor * FACTOR_6462;
}
