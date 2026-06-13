// fichero 47570 -- macros y constantes
#define LIMITE_47570 47670
#define FACTOR_47570 1

int aplicar_limite47570(int valor) {
    if (valor > LIMITE_47570) return LIMITE_47570;
    return valor * FACTOR_47570;
}
