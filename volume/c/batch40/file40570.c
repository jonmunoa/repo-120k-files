// fichero 40570 -- macros y constantes
#define LIMITE_40570 40670
#define FACTOR_40570 1

int aplicar_limite40570(int valor) {
    if (valor > LIMITE_40570) return LIMITE_40570;
    return valor * FACTOR_40570;
}
