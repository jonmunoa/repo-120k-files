// fichero 15646 -- macros y constantes
#define LIMITE_15646 15746
#define FACTOR_15646 2

int aplicar_limite15646(int valor) {
    if (valor > LIMITE_15646) return LIMITE_15646;
    return valor * FACTOR_15646;
}
