// fichero 16778 -- macros y constantes
#define LIMITE_16778 16878
#define FACTOR_16778 4

int aplicar_limite16778(int valor) {
    if (valor > LIMITE_16778) return LIMITE_16778;
    return valor * FACTOR_16778;
}
