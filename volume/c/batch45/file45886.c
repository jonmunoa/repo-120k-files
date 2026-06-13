// fichero 45886 -- macros y constantes
#define LIMITE_45886 45986
#define FACTOR_45886 2

int aplicar_limite45886(int valor) {
    if (valor > LIMITE_45886) return LIMITE_45886;
    return valor * FACTOR_45886;
}
