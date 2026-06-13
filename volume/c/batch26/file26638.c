// fichero 26638 -- macros y constantes
#define LIMITE_26638 26738
#define FACTOR_26638 4

int aplicar_limite26638(int valor) {
    if (valor > LIMITE_26638) return LIMITE_26638;
    return valor * FACTOR_26638;
}
