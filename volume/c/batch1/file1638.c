// fichero 1638 -- macros y constantes
#define LIMITE_1638 1738
#define FACTOR_1638 4

int aplicar_limite1638(int valor) {
    if (valor > LIMITE_1638) return LIMITE_1638;
    return valor * FACTOR_1638;
}
