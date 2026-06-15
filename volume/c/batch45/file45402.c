// fichero 45402 -- macros y constantes -- MODIFICADO
#define LIMITE_45402 45602
#define FACTOR_45402 4

int aplicar_limite45402(int valor) {
    if (valor > LIMITE_45402) return LIMITE_45402;
    return valor * FACTOR_45402;
}
