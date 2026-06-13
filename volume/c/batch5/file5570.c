// fichero 5570 -- macros y constantes
#define LIMITE_5570 5670
#define FACTOR_5570 1

int aplicar_limite5570(int valor) {
    if (valor > LIMITE_5570) return LIMITE_5570;
    return valor * FACTOR_5570;
}
