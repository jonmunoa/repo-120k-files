// fichero 17638 -- macros y constantes
#define LIMITE_17638 17738
#define FACTOR_17638 4

int aplicar_limite17638(int valor) {
    if (valor > LIMITE_17638) return LIMITE_17638;
    return valor * FACTOR_17638;
}
