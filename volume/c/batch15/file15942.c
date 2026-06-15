// fichero 15942 -- macros y constantes -- MODIFICADO
#define LIMITE_15942 16142
#define FACTOR_15942 4

int aplicar_limite15942(int valor) {
    if (valor > LIMITE_15942) return LIMITE_15942;
    return valor * FACTOR_15942;
}
