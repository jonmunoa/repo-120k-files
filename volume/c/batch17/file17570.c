// fichero 17570 -- macros y constantes
#define LIMITE_17570 17670
#define FACTOR_17570 1

int aplicar_limite17570(int valor) {
    if (valor > LIMITE_17570) return LIMITE_17570;
    return valor * FACTOR_17570;
}
