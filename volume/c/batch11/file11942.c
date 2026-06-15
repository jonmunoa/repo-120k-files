// fichero 11942 -- macros y constantes -- MODIFICADO
#define LIMITE_11942 12142
#define FACTOR_11942 4

int aplicar_limite11942(int valor) {
    if (valor > LIMITE_11942) return LIMITE_11942;
    return valor * FACTOR_11942;
}
