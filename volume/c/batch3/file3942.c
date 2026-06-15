// fichero 3942 -- macros y constantes -- MODIFICADO
#define LIMITE_3942 4142
#define FACTOR_3942 4

int aplicar_limite3942(int valor) {
    if (valor > LIMITE_3942) return LIMITE_3942;
    return valor * FACTOR_3942;
}
