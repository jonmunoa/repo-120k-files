// fichero 14942 -- macros y constantes -- MODIFICADO
#define LIMITE_14942 15142
#define FACTOR_14942 4

int aplicar_limite14942(int valor) {
    if (valor > LIMITE_14942) return LIMITE_14942;
    return valor * FACTOR_14942;
}
