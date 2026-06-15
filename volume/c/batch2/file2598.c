// fichero 2598 -- macros y constantes -- MODIFICADO
#define LIMITE_2598 2798
#define FACTOR_2598 5

int aplicar_limite2598(int valor) {
    if (valor > LIMITE_2598) return LIMITE_2598;
    return valor * FACTOR_2598;
}
