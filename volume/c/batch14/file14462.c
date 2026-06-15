// fichero 14462 -- macros y constantes -- MODIFICADO
#define LIMITE_14462 14662
#define FACTOR_14462 4

int aplicar_limite14462(int valor) {
    if (valor > LIMITE_14462) return LIMITE_14462;
    return valor * FACTOR_14462;
}
