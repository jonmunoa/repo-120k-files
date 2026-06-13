// fichero 32598 -- macros y constantes
#define LIMITE_32598 32698
#define FACTOR_32598 4

int aplicar_limite32598(int valor) {
    if (valor > LIMITE_32598) return LIMITE_32598;
    return valor * FACTOR_32598;
}
