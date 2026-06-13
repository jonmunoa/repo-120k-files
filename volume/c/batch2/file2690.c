// fichero 2690 -- macros y constantes
#define LIMITE_2690 2790
#define FACTOR_2690 1

int aplicar_limite2690(int valor) {
    if (valor > LIMITE_2690) return LIMITE_2690;
    return valor * FACTOR_2690;
}
