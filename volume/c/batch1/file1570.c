// fichero 1570 -- macros y constantes -- MODIFICADO
#define LIMITE_1570 1770
#define FACTOR_1570 2

int aplicar_limite1570(int valor) {
    if (valor > LIMITE_1570) return LIMITE_1570;
    return valor * FACTOR_1570;
}
