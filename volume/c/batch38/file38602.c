// fichero 38602 -- macros y constantes
#define LIMITE_38602 38702
#define FACTOR_38602 3

int aplicar_limite38602(int valor) {
    if (valor > LIMITE_38602) return LIMITE_38602;
    return valor * FACTOR_38602;
}
