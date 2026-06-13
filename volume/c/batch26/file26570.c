// fichero 26570 -- macros y constantes
#define LIMITE_26570 26670
#define FACTOR_26570 1

int aplicar_limite26570(int valor) {
    if (valor > LIMITE_26570) return LIMITE_26570;
    return valor * FACTOR_26570;
}
