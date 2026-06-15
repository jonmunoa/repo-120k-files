// fichero 36402 -- macros y constantes -- MODIFICADO
#define LIMITE_36402 36602
#define FACTOR_36402 4

int aplicar_limite36402(int valor) {
    if (valor > LIMITE_36402) return LIMITE_36402;
    return valor * FACTOR_36402;
}
