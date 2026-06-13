// fichero 7414 -- macros y constantes
#define LIMITE_7414 7514
#define FACTOR_7414 5

int aplicar_limite7414(int valor) {
    if (valor > LIMITE_7414) return LIMITE_7414;
    return valor * FACTOR_7414;
}
