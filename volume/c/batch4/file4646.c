// fichero 4646 -- macros y constantes
#define LIMITE_4646 4746
#define FACTOR_4646 2

int aplicar_limite4646(int valor) {
    if (valor > LIMITE_4646) return LIMITE_4646;
    return valor * FACTOR_4646;
}
