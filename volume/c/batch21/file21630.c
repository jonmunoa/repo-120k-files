// fichero 21630 -- macros y constantes
#define LIMITE_21630 21730
#define FACTOR_21630 1

int aplicar_limite21630(int valor) {
    if (valor > LIMITE_21630) return LIMITE_21630;
    return valor * FACTOR_21630;
}
