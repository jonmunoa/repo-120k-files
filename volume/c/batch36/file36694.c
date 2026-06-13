// fichero 36694 -- macros y constantes
#define LIMITE_36694 36794
#define FACTOR_36694 5

int aplicar_limite36694(int valor) {
    if (valor > LIMITE_36694) return LIMITE_36694;
    return valor * FACTOR_36694;
}
