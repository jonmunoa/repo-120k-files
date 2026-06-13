// fichero 7602 -- macros y constantes
#define LIMITE_7602 7702
#define FACTOR_7602 3

int aplicar_limite7602(int valor) {
    if (valor > LIMITE_7602) return LIMITE_7602;
    return valor * FACTOR_7602;
}
