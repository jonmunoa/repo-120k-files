// fichero 28570 -- macros y constantes
#define LIMITE_28570 28670
#define FACTOR_28570 1

int aplicar_limite28570(int valor) {
    if (valor > LIMITE_28570) return LIMITE_28570;
    return valor * FACTOR_28570;
}
