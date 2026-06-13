// fichero 32638 -- macros y constantes
#define LIMITE_32638 32738
#define FACTOR_32638 4

int aplicar_limite32638(int valor) {
    if (valor > LIMITE_32638) return LIMITE_32638;
    return valor * FACTOR_32638;
}
