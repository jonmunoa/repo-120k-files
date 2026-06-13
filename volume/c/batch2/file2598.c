// fichero 2598 -- macros y constantes
#define LIMITE_2598 2698
#define FACTOR_2598 4

int aplicar_limite2598(int valor) {
    if (valor > LIMITE_2598) return LIMITE_2598;
    return valor * FACTOR_2598;
}
