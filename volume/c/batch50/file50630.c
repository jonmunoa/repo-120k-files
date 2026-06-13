// fichero 50630 -- macros y constantes
#define LIMITE_50630 50730
#define FACTOR_50630 1

int aplicar_limite50630(int valor) {
    if (valor > LIMITE_50630) return LIMITE_50630;
    return valor * FACTOR_50630;
}
