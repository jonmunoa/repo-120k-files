// fichero 32886 -- macros y constantes
#define LIMITE_32886 32986
#define FACTOR_32886 2

int aplicar_limite32886(int valor) {
    if (valor > LIMITE_32886) return LIMITE_32886;
    return valor * FACTOR_32886;
}
