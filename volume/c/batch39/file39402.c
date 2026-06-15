// fichero 39402 -- macros y constantes -- MODIFICADO
#define LIMITE_39402 39602
#define FACTOR_39402 4

int aplicar_limite39402(int valor) {
    if (valor > LIMITE_39402) return LIMITE_39402;
    return valor * FACTOR_39402;
}
