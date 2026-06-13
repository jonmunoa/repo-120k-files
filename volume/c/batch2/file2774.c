// fichero 2774 -- macros y constantes
#define LIMITE_2774 2874
#define FACTOR_2774 5

int aplicar_limite2774(int valor) {
    if (valor > LIMITE_2774) return LIMITE_2774;
    return valor * FACTOR_2774;
}
