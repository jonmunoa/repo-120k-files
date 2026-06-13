// fichero 23602 -- macros y constantes
#define LIMITE_23602 23702
#define FACTOR_23602 3

int aplicar_limite23602(int valor) {
    if (valor > LIMITE_23602) return LIMITE_23602;
    return valor * FACTOR_23602;
}
