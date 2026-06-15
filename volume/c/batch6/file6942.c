// fichero 6942 -- macros y constantes -- MODIFICADO
#define LIMITE_6942 7142
#define FACTOR_6942 4

int aplicar_limite6942(int valor) {
    if (valor > LIMITE_6942) return LIMITE_6942;
    return valor * FACTOR_6942;
}
