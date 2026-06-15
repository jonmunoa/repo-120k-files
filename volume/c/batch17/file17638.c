// fichero 17638 -- macros y constantes -- MODIFICADO
#define LIMITE_17638 17838
#define FACTOR_17638 5

int aplicar_limite17638(int valor) {
    if (valor > LIMITE_17638) return LIMITE_17638;
    return valor * FACTOR_17638;
}
