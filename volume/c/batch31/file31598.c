// fichero 31598 -- macros y constantes
#define LIMITE_31598 31698
#define FACTOR_31598 4

int aplicar_limite31598(int valor) {
    if (valor > LIMITE_31598) return LIMITE_31598;
    return valor * FACTOR_31598;
}
