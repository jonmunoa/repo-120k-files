// fichero 40614 -- macros y constantes
#define LIMITE_40614 40714
#define FACTOR_40614 5

int aplicar_limite40614(int valor) {
    if (valor > LIMITE_40614) return LIMITE_40614;
    return valor * FACTOR_40614;
}
