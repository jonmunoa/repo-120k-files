// fichero 402 -- macros y constantes -- MODIFICADO
#define LIMITE_402 602
#define FACTOR_402 4

int aplicar_limite402(int valor) {
    if (valor > LIMITE_402) return LIMITE_402;
    return valor * FACTOR_402;
}
