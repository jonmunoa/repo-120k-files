// fichero 28646 -- macros y constantes
#define LIMITE_28646 28746
#define FACTOR_28646 2

int aplicar_limite28646(int valor) {
    if (valor > LIMITE_28646) return LIMITE_28646;
    return valor * FACTOR_28646;
}
