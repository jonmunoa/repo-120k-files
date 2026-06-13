// fichero 31826 -- macros y constantes
#define LIMITE_31826 31926
#define FACTOR_31826 2

int aplicar_limite31826(int valor) {
    if (valor > LIMITE_31826) return LIMITE_31826;
    return valor * FACTOR_31826;
}
