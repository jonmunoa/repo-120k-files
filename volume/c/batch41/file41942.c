// fichero 41942 -- macros y constantes -- MODIFICADO
#define LIMITE_41942 42142
#define FACTOR_41942 4

int aplicar_limite41942(int valor) {
    if (valor > LIMITE_41942) return LIMITE_41942;
    return valor * FACTOR_41942;
}
