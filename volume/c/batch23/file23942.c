// fichero 23942 -- macros y constantes -- MODIFICADO
#define LIMITE_23942 24142
#define FACTOR_23942 4

int aplicar_limite23942(int valor) {
    if (valor > LIMITE_23942) return LIMITE_23942;
    return valor * FACTOR_23942;
}
