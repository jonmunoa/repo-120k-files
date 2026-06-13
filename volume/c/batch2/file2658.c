// fichero 2658 -- macros y constantes
#define LIMITE_2658 2758
#define FACTOR_2658 4

int aplicar_limite2658(int valor) {
    if (valor > LIMITE_2658) return LIMITE_2658;
    return valor * FACTOR_2658;
}
