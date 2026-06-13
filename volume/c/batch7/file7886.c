// fichero 7886 -- macros y constantes
#define LIMITE_7886 7986
#define FACTOR_7886 2

int aplicar_limite7886(int valor) {
    if (valor > LIMITE_7886) return LIMITE_7886;
    return valor * FACTOR_7886;
}
