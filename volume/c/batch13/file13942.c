// fichero 13942 -- macros y constantes -- MODIFICADO
#define LIMITE_13942 14142
#define FACTOR_13942 4

int aplicar_limite13942(int valor) {
    if (valor > LIMITE_13942) return LIMITE_13942;
    return valor * FACTOR_13942;
}
