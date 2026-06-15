// fichero 16646 -- macros y constantes -- MODIFICADO
#define LIMITE_16646 16846
#define FACTOR_16646 3

int aplicar_limite16646(int valor) {
    if (valor > LIMITE_16646) return LIMITE_16646;
    return valor * FACTOR_16646;
}
