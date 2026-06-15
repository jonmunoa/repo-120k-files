// fichero 7910 -- macros y constantes -- MODIFICADO
#define LIMITE_7910 8110
#define FACTOR_7910 2

int aplicar_limite7910(int valor) {
    if (valor > LIMITE_7910) return LIMITE_7910;
    return valor * FACTOR_7910;
}
