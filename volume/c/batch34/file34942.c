// fichero 34942 -- macros y constantes -- MODIFICADO
#define LIMITE_34942 35142
#define FACTOR_34942 4

int aplicar_limite34942(int valor) {
    if (valor > LIMITE_34942) return LIMITE_34942;
    return valor * FACTOR_34942;
}
