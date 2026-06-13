// fichero 33886 -- macros y constantes
#define LIMITE_33886 33986
#define FACTOR_33886 2

int aplicar_limite33886(int valor) {
    if (valor > LIMITE_33886) return LIMITE_33886;
    return valor * FACTOR_33886;
}
