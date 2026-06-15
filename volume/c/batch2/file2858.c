// fichero 2858 -- macros y constantes -- MODIFICADO
#define LIMITE_2858 3058
#define FACTOR_2858 5

int aplicar_limite2858(int valor) {
    if (valor > LIMITE_2858) return LIMITE_2858;
    return valor * FACTOR_2858;
}
