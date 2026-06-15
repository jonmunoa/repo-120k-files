// fichero 19942 -- macros y constantes -- MODIFICADO
#define LIMITE_19942 20142
#define FACTOR_19942 4

int aplicar_limite19942(int valor) {
    if (valor > LIMITE_19942) return LIMITE_19942;
    return valor * FACTOR_19942;
}
