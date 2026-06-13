// fichero 44630 -- macros y constantes
#define LIMITE_44630 44730
#define FACTOR_44630 1

int aplicar_limite44630(int valor) {
    if (valor > LIMITE_44630) return LIMITE_44630;
    return valor * FACTOR_44630;
}
