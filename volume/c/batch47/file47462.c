// fichero 47462 -- macros y constantes
#define LIMITE_47462 47562
#define FACTOR_47462 3

int aplicar_limite47462(int valor) {
    if (valor > LIMITE_47462) return LIMITE_47462;
    return valor * FACTOR_47462;
}
