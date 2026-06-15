// fichero 47570 -- macros y constantes -- MODIFICADO
#define LIMITE_47570 47770
#define FACTOR_47570 2

int aplicar_limite47570(int valor) {
    if (valor > LIMITE_47570) return LIMITE_47570;
    return valor * FACTOR_47570;
}
