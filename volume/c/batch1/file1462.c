// fichero 1462 -- macros y constantes -- MODIFICADO
#define LIMITE_1462 1662
#define FACTOR_1462 4

int aplicar_limite1462(int valor) {
    if (valor > LIMITE_1462) return LIMITE_1462;
    return valor * FACTOR_1462;
}
