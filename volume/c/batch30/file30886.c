// fichero 30886 -- macros y constantes
#define LIMITE_30886 30986
#define FACTOR_30886 2

int aplicar_limite30886(int valor) {
    if (valor > LIMITE_30886) return LIMITE_30886;
    return valor * FACTOR_30886;
}
