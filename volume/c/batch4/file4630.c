// fichero 4630 -- macros y constantes
#define LIMITE_4630 4730
#define FACTOR_4630 1

int aplicar_limite4630(int valor) {
    if (valor > LIMITE_4630) return LIMITE_4630;
    return valor * FACTOR_4630;
}
