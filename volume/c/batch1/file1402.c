// fichero 1402 -- macros y constantes -- MODIFICADO
#define LIMITE_1402 1602
#define FACTOR_1402 4

int aplicar_limite1402(int valor) {
    if (valor > LIMITE_1402) return LIMITE_1402;
    return valor * FACTOR_1402;
}
