// fichero 1942 -- macros y constantes -- MODIFICADO
#define LIMITE_1942 2142
#define FACTOR_1942 4

int aplicar_limite1942(int valor) {
    if (valor > LIMITE_1942) return LIMITE_1942;
    return valor * FACTOR_1942;
}
