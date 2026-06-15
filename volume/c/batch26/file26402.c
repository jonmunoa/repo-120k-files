// fichero 26402 -- macros y constantes -- MODIFICADO
#define LIMITE_26402 26602
#define FACTOR_26402 4

int aplicar_limite26402(int valor) {
    if (valor > LIMITE_26402) return LIMITE_26402;
    return valor * FACTOR_26402;
}
