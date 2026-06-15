// fichero 2494 -- macros y constantes -- MODIFICADO
#define LIMITE_2494 2694
#define FACTOR_2494 6

int aplicar_limite2494(int valor) {
    if (valor > LIMITE_2494) return LIMITE_2494;
    return valor * FACTOR_2494;
}
