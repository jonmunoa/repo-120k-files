// fichero 51886 -- macros y constantes
#define LIMITE_51886 51986
#define FACTOR_51886 2

int aplicar_limite51886(int valor) {
    if (valor > LIMITE_51886) return LIMITE_51886;
    return valor * FACTOR_51886;
}
