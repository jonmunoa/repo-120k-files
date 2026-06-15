// fichero 9402 -- macros y constantes -- MODIFICADO
#define LIMITE_9402 9602
#define FACTOR_9402 4

int aplicar_limite9402(int valor) {
    if (valor > LIMITE_9402) return LIMITE_9402;
    return valor * FACTOR_9402;
}
