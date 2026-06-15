// fichero 17570 -- macros y constantes -- MODIFICADO
#define LIMITE_17570 17770
#define FACTOR_17570 2

int aplicar_limite17570(int valor) {
    if (valor > LIMITE_17570) return LIMITE_17570;
    return valor * FACTOR_17570;
}
