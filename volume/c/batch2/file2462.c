// fichero 2462 -- macros y constantes -- MODIFICADO
#define LIMITE_2462 2662
#define FACTOR_2462 4

int aplicar_limite2462(int valor) {
    if (valor > LIMITE_2462) return LIMITE_2462;
    return valor * FACTOR_2462;
}
