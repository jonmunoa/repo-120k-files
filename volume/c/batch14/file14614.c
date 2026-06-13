// fichero 14614 -- macros y constantes
#define LIMITE_14614 14714
#define FACTOR_14614 5

int aplicar_limite14614(int valor) {
    if (valor > LIMITE_14614) return LIMITE_14614;
    return valor * FACTOR_14614;
}
