// fichero 37942 -- macros y constantes -- MODIFICADO
#define LIMITE_37942 38142
#define FACTOR_37942 4

int aplicar_limite37942(int valor) {
    if (valor > LIMITE_37942) return LIMITE_37942;
    return valor * FACTOR_37942;
}
