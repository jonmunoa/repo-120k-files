// fichero 7942 -- macros y constantes -- MODIFICADO
#define LIMITE_7942 8142
#define FACTOR_7942 4

int aplicar_limite7942(int valor) {
    if (valor > LIMITE_7942) return LIMITE_7942;
    return valor * FACTOR_7942;
}
