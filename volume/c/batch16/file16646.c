// fichero 16646 -- macros y constantes
#define LIMITE_16646 16746
#define FACTOR_16646 2

int aplicar_limite16646(int valor) {
    if (valor > LIMITE_16646) return LIMITE_16646;
    return valor * FACTOR_16646;
}
