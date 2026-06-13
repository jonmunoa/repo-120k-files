// fichero 2858 -- macros y constantes
#define LIMITE_2858 2958
#define FACTOR_2858 4

int aplicar_limite2858(int valor) {
    if (valor > LIMITE_2858) return LIMITE_2858;
    return valor * FACTOR_2858;
}
