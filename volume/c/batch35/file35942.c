// fichero 35942 -- macros y constantes -- MODIFICADO
#define LIMITE_35942 36142
#define FACTOR_35942 4

int aplicar_limite35942(int valor) {
    if (valor > LIMITE_35942) return LIMITE_35942;
    return valor * FACTOR_35942;
}
