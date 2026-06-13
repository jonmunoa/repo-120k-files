// fichero 7614 -- macros y constantes
#define LIMITE_7614 7714
#define FACTOR_7614 5

int aplicar_limite7614(int valor) {
    if (valor > LIMITE_7614) return LIMITE_7614;
    return valor * FACTOR_7614;
}
