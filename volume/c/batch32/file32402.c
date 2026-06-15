// fichero 32402 -- macros y constantes -- MODIFICADO
#define LIMITE_32402 32602
#define FACTOR_32402 4

int aplicar_limite32402(int valor) {
    if (valor > LIMITE_32402) return LIMITE_32402;
    return valor * FACTOR_32402;
}
