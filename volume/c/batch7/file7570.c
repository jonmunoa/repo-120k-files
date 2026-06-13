// fichero 7570 -- macros y constantes
#define LIMITE_7570 7670
#define FACTOR_7570 1

int aplicar_limite7570(int valor) {
    if (valor > LIMITE_7570) return LIMITE_7570;
    return valor * FACTOR_7570;
}
