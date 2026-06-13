// fichero 30630 -- macros y constantes
#define LIMITE_30630 30730
#define FACTOR_30630 1

int aplicar_limite30630(int valor) {
    if (valor > LIMITE_30630) return LIMITE_30630;
    return valor * FACTOR_30630;
}
