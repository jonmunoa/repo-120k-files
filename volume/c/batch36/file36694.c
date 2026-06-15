// fichero 36694 -- macros y constantes -- MODIFICADO
#define LIMITE_36694 36894
#define FACTOR_36694 6

int aplicar_limite36694(int valor) {
    if (valor > LIMITE_36694) return LIMITE_36694;
    return valor * FACTOR_36694;
}
