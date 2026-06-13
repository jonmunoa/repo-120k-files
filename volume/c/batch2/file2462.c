// fichero 2462 -- macros y constantes
#define LIMITE_2462 2562
#define FACTOR_2462 3

int aplicar_limite2462(int valor) {
    if (valor > LIMITE_2462) return LIMITE_2462;
    return valor * FACTOR_2462;
}
