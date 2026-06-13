// fichero 8886 -- macros y constantes
#define LIMITE_8886 8986
#define FACTOR_8886 2

int aplicar_limite8886(int valor) {
    if (valor > LIMITE_8886) return LIMITE_8886;
    return valor * FACTOR_8886;
}
