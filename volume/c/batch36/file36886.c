// fichero 36886 -- macros y constantes
#define LIMITE_36886 36986
#define FACTOR_36886 2

int aplicar_limite36886(int valor) {
    if (valor > LIMITE_36886) return LIMITE_36886;
    return valor * FACTOR_36886;
}
