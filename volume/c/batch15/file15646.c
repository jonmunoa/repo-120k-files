// fichero 15646 -- macros y constantes -- MODIFICADO
#define LIMITE_15646 15846
#define FACTOR_15646 3

int aplicar_limite15646(int valor) {
    if (valor > LIMITE_15646) return LIMITE_15646;
    return valor * FACTOR_15646;
}
