// fichero 6638 -- macros y constantes
#define LIMITE_6638 6738
#define FACTOR_6638 4

int aplicar_limite6638(int valor) {
    if (valor > LIMITE_6638) return LIMITE_6638;
    return valor * FACTOR_6638;
}
