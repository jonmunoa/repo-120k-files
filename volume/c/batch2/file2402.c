// fichero 2402 -- macros y constantes -- MODIFICADO
#define LIMITE_2402 2602
#define FACTOR_2402 4

int aplicar_limite2402(int valor) {
    if (valor > LIMITE_2402) return LIMITE_2402;
    return valor * FACTOR_2402;
}
