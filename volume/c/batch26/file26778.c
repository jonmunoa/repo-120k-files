// fichero 26778 -- macros y constantes
#define LIMITE_26778 26878
#define FACTOR_26778 4

int aplicar_limite26778(int valor) {
    if (valor > LIMITE_26778) return LIMITE_26778;
    return valor * FACTOR_26778;
}
