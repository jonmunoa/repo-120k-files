// fichero 48570 -- macros y constantes
#define LIMITE_48570 48670
#define FACTOR_48570 1

int aplicar_limite48570(int valor) {
    if (valor > LIMITE_48570) return LIMITE_48570;
    return valor * FACTOR_48570;
}
