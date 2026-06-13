// fichero 20630 -- macros y constantes
#define LIMITE_20630 20730
#define FACTOR_20630 1

int aplicar_limite20630(int valor) {
    if (valor > LIMITE_20630) return LIMITE_20630;
    return valor * FACTOR_20630;
}
