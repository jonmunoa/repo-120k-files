// fichero 23402 -- macros y constantes -- MODIFICADO
#define LIMITE_23402 23602
#define FACTOR_23402 4

int aplicar_limite23402(int valor) {
    if (valor > LIMITE_23402) return LIMITE_23402;
    return valor * FACTOR_23402;
}
