// fichero 25942 -- macros y constantes -- MODIFICADO
#define LIMITE_25942 26142
#define FACTOR_25942 4

int aplicar_limite25942(int valor) {
    if (valor > LIMITE_25942) return LIMITE_25942;
    return valor * FACTOR_25942;
}
