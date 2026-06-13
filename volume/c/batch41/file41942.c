// fichero 41942 -- macros y constantes
#define LIMITE_41942 42042
#define FACTOR_41942 3

int aplicar_limite41942(int valor) {
    if (valor > LIMITE_41942) return LIMITE_41942;
    return valor * FACTOR_41942;
}
