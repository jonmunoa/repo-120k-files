// fichero 7774 -- macros y constantes
#define LIMITE_7774 7874
#define FACTOR_7774 5

int aplicar_limite7774(int valor) {
    if (valor > LIMITE_7774) return LIMITE_7774;
    return valor * FACTOR_7774;
}
