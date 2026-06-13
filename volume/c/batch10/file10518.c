// fichero 10518 -- macros y constantes
#define LIMITE_10518 10618
#define FACTOR_10518 4

int aplicar_limite10518(int valor) {
    if (valor > LIMITE_10518) return LIMITE_10518;
    return valor * FACTOR_10518;
}
