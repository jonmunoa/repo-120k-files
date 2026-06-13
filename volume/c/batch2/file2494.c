// fichero 2494 -- macros y constantes
#define LIMITE_2494 2594
#define FACTOR_2494 5

int aplicar_limite2494(int valor) {
    if (valor > LIMITE_2494) return LIMITE_2494;
    return valor * FACTOR_2494;
}
