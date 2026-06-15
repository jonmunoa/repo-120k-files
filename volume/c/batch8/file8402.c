// fichero 8402 -- macros y constantes -- MODIFICADO
#define LIMITE_8402 8602
#define FACTOR_8402 4

int aplicar_limite8402(int valor) {
    if (valor > LIMITE_8402) return LIMITE_8402;
    return valor * FACTOR_8402;
}
