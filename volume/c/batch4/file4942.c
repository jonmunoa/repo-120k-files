// fichero 4942 -- macros y constantes -- MODIFICADO
#define LIMITE_4942 5142
#define FACTOR_4942 4

int aplicar_limite4942(int valor) {
    if (valor > LIMITE_4942) return LIMITE_4942;
    return valor * FACTOR_4942;
}
