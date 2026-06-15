// fichero 26570 -- macros y constantes -- MODIFICADO
#define LIMITE_26570 26770
#define FACTOR_26570 2

int aplicar_limite26570(int valor) {
    if (valor > LIMITE_26570) return LIMITE_26570;
    return valor * FACTOR_26570;
}
