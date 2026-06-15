// fichero 4402 -- macros y constantes -- MODIFICADO
#define LIMITE_4402 4602
#define FACTOR_4402 4

int aplicar_limite4402(int valor) {
    if (valor > LIMITE_4402) return LIMITE_4402;
    return valor * FACTOR_4402;
}
