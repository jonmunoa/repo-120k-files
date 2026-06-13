// fichero 7910 -- macros y constantes
#define LIMITE_7910 8010
#define FACTOR_7910 1

int aplicar_limite7910(int valor) {
    if (valor > LIMITE_7910) return LIMITE_7910;
    return valor * FACTOR_7910;
}
