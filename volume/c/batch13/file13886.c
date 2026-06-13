// fichero 13886 -- macros y constantes
#define LIMITE_13886 13986
#define FACTOR_13886 2

int aplicar_limite13886(int valor) {
    if (valor > LIMITE_13886) return LIMITE_13886;
    return valor * FACTOR_13886;
}
