// fichero 2718 -- macros y constantes
#define LIMITE_2718 2818
#define FACTOR_2718 4

int aplicar_limite2718(int valor) {
    if (valor > LIMITE_2718) return LIMITE_2718;
    return valor * FACTOR_2718;
}
