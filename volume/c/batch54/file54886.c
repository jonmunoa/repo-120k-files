// fichero 54886 -- macros y constantes
#define LIMITE_54886 54986
#define FACTOR_54886 2

int aplicar_limite54886(int valor) {
    if (valor > LIMITE_54886) return LIMITE_54886;
    return valor * FACTOR_54886;
}
