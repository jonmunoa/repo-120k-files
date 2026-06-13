// fichero 18638 -- macros y constantes
#define LIMITE_18638 18738
#define FACTOR_18638 4

int aplicar_limite18638(int valor) {
    if (valor > LIMITE_18638) return LIMITE_18638;
    return valor * FACTOR_18638;
}
