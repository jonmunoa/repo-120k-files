// fichero 14462 -- macros y constantes
#define LIMITE_14462 14562
#define FACTOR_14462 3

int aplicar_limite14462(int valor) {
    if (valor > LIMITE_14462) return LIMITE_14462;
    return valor * FACTOR_14462;
}
