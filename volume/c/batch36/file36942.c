// fichero 36942 -- macros y constantes -- MODIFICADO
#define LIMITE_36942 37142
#define FACTOR_36942 4

int aplicar_limite36942(int valor) {
    if (valor > LIMITE_36942) return LIMITE_36942;
    return valor * FACTOR_36942;
}
