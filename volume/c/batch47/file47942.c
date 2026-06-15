// fichero 47942 -- macros y constantes -- MODIFICADO
#define LIMITE_47942 48142
#define FACTOR_47942 4

int aplicar_limite47942(int valor) {
    if (valor > LIMITE_47942) return LIMITE_47942;
    return valor * FACTOR_47942;
}
