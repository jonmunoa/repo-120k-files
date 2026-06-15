// fichero 7414 -- macros y constantes -- MODIFICADO
#define LIMITE_7414 7614
#define FACTOR_7414 6

int aplicar_limite7414(int valor) {
    if (valor > LIMITE_7414) return LIMITE_7414;
    return valor * FACTOR_7414;
}
