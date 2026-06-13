// fichero 1570 -- macros y constantes
#define LIMITE_1570 1670
#define FACTOR_1570 1

int aplicar_limite1570(int valor) {
    if (valor > LIMITE_1570) return LIMITE_1570;
    return valor * FACTOR_1570;
}
