// fichero 31402 -- macros y constantes -- MODIFICADO
#define LIMITE_31402 31602
#define FACTOR_31402 4

int aplicar_limite31402(int valor) {
    if (valor > LIMITE_31402) return LIMITE_31402;
    return valor * FACTOR_31402;
}
