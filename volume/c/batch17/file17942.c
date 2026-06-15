// fichero 17942 -- macros y constantes -- MODIFICADO
#define LIMITE_17942 18142
#define FACTOR_17942 4

int aplicar_limite17942(int valor) {
    if (valor > LIMITE_17942) return LIMITE_17942;
    return valor * FACTOR_17942;
}
