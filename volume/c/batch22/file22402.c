// fichero 22402 -- macros y constantes -- MODIFICADO
#define LIMITE_22402 22602
#define FACTOR_22402 4

int aplicar_limite22402(int valor) {
    if (valor > LIMITE_22402) return LIMITE_22402;
    return valor * FACTOR_22402;
}
