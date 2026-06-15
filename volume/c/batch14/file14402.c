// fichero 14402 -- macros y constantes -- MODIFICADO
#define LIMITE_14402 14602
#define FACTOR_14402 4

int aplicar_limite14402(int valor) {
    if (valor > LIMITE_14402) return LIMITE_14402;
    return valor * FACTOR_14402;
}
