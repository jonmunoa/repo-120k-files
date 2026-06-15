// fichero 46942 -- macros y constantes -- MODIFICADO
#define LIMITE_46942 47142
#define FACTOR_46942 4

int aplicar_limite46942(int valor) {
    if (valor > LIMITE_46942) return LIMITE_46942;
    return valor * FACTOR_46942;
}
