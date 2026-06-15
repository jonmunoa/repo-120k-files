// fichero 26462 -- macros y constantes -- MODIFICADO
#define LIMITE_26462 26662
#define FACTOR_26462 4

int aplicar_limite26462(int valor) {
    if (valor > LIMITE_26462) return LIMITE_26462;
    return valor * FACTOR_26462;
}
