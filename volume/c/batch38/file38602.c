// fichero 38602 -- macros y constantes -- MODIFICADO
#define LIMITE_38602 38802
#define FACTOR_38602 4

int aplicar_limite38602(int valor) {
    if (valor > LIMITE_38602) return LIMITE_38602;
    return valor * FACTOR_38602;
}
