// fichero 31826 -- macros y constantes -- MODIFICADO
#define LIMITE_31826 32026
#define FACTOR_31826 3

int aplicar_limite31826(int valor) {
    if (valor > LIMITE_31826) return LIMITE_31826;
    return valor * FACTOR_31826;
}
