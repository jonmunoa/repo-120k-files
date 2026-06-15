// fichero 1886 -- macros y constantes -- MODIFICADO
#define LIMITE_1886 2086
#define FACTOR_1886 3

int aplicar_limite1886(int valor) {
    if (valor > LIMITE_1886) return LIMITE_1886;
    return valor * FACTOR_1886;
}
