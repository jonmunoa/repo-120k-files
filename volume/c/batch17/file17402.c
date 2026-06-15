// fichero 17402 -- macros y constantes -- MODIFICADO
#define LIMITE_17402 17602
#define FACTOR_17402 4

int aplicar_limite17402(int valor) {
    if (valor > LIMITE_17402) return LIMITE_17402;
    return valor * FACTOR_17402;
}
