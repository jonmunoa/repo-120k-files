// fichero 21886 -- macros y constantes
#define LIMITE_21886 21986
#define FACTOR_21886 2

int aplicar_limite21886(int valor) {
    if (valor > LIMITE_21886) return LIMITE_21886;
    return valor * FACTOR_21886;
}
