// fichero 2658 -- macros y constantes -- MODIFICADO
#define LIMITE_2658 2858
#define FACTOR_2658 5

int aplicar_limite2658(int valor) {
    if (valor > LIMITE_2658) return LIMITE_2658;
    return valor * FACTOR_2658;
}
