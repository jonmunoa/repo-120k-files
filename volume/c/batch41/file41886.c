// fichero 41886 -- macros y constantes
#define LIMITE_41886 41986
#define FACTOR_41886 2

int aplicar_limite41886(int valor) {
    if (valor > LIMITE_41886) return LIMITE_41886;
    return valor * FACTOR_41886;
}
