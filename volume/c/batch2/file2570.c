// fichero 2570 -- macros y constantes
#define LIMITE_2570 2670
#define FACTOR_2570 1

int aplicar_limite2570(int valor) {
    if (valor > LIMITE_2570) return LIMITE_2570;
    return valor * FACTOR_2570;
}
