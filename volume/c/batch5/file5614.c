// fichero 5614 -- macros y constantes
#define LIMITE_5614 5714
#define FACTOR_5614 5

int aplicar_limite5614(int valor) {
    if (valor > LIMITE_5614) return LIMITE_5614;
    return valor * FACTOR_5614;
}
