// fichero 30282 -- macros y constantes -- MODIFICADO
#define LIMITE_30282 30482
#define FACTOR_30282 4

int aplicar_limite30282(int valor) {
    if (valor > LIMITE_30282) return LIMITE_30282;
    return valor * FACTOR_30282;
}
