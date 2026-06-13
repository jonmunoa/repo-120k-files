// fichero 26646 -- macros y constantes
#define LIMITE_26646 26746
#define FACTOR_26646 2

int aplicar_limite26646(int valor) {
    if (valor > LIMITE_26646) return LIMITE_26646;
    return valor * FACTOR_26646;
}
