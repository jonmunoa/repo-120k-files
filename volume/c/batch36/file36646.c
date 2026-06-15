// fichero 36646 -- macros y constantes -- MODIFICADO
#define LIMITE_36646 36846
#define FACTOR_36646 3

int aplicar_limite36646(int valor) {
    if (valor > LIMITE_36646) return LIMITE_36646;
    return valor * FACTOR_36646;
}
