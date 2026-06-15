// fichero 3402 -- macros y constantes -- MODIFICADO
#define LIMITE_3402 3602
#define FACTOR_3402 4

int aplicar_limite3402(int valor) {
    if (valor > LIMITE_3402) return LIMITE_3402;
    return valor * FACTOR_3402;
}
