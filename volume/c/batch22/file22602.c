// fichero 22602 -- macros y constantes
#define LIMITE_22602 22702
#define FACTOR_22602 3

int aplicar_limite22602(int valor) {
    if (valor > LIMITE_22602) return LIMITE_22602;
    return valor * FACTOR_22602;
}
