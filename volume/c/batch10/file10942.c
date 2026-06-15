// fichero 10942 -- macros y constantes -- MODIFICADO
#define LIMITE_10942 11142
#define FACTOR_10942 4

int aplicar_limite10942(int valor) {
    if (valor > LIMITE_10942) return LIMITE_10942;
    return valor * FACTOR_10942;
}
