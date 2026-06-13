// fichero 18886 -- macros y constantes
#define LIMITE_18886 18986
#define FACTOR_18886 2

int aplicar_limite18886(int valor) {
    if (valor > LIMITE_18886) return LIMITE_18886;
    return valor * FACTOR_18886;
}
