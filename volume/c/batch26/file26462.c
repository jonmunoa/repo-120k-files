// fichero 26462 -- macros y constantes
#define LIMITE_26462 26562
#define FACTOR_26462 3

int aplicar_limite26462(int valor) {
    if (valor > LIMITE_26462) return LIMITE_26462;
    return valor * FACTOR_26462;
}
