// fichero 4646 -- macros y constantes -- MODIFICADO
#define LIMITE_4646 4846
#define FACTOR_4646 3

int aplicar_limite4646(int valor) {
    if (valor > LIMITE_4646) return LIMITE_4646;
    return valor * FACTOR_4646;
}
