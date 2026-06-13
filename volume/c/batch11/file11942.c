// fichero 11942 -- macros y constantes
#define LIMITE_11942 12042
#define FACTOR_11942 3

int aplicar_limite11942(int valor) {
    if (valor > LIMITE_11942) return LIMITE_11942;
    return valor * FACTOR_11942;
}
