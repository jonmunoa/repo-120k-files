// fichero 24598 -- macros y constantes
#define LIMITE_24598 24698
#define FACTOR_24598 4

int aplicar_limite24598(int valor) {
    if (valor > LIMITE_24598) return LIMITE_24598;
    return valor * FACTOR_24598;
}
