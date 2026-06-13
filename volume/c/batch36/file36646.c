// fichero 36646 -- macros y constantes
#define LIMITE_36646 36746
#define FACTOR_36646 2

int aplicar_limite36646(int valor) {
    if (valor > LIMITE_36646) return LIMITE_36646;
    return valor * FACTOR_36646;
}
