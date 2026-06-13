// fichero 19602 -- macros y constantes
#define LIMITE_19602 19702
#define FACTOR_19602 3

int aplicar_limite19602(int valor) {
    if (valor > LIMITE_19602) return LIMITE_19602;
    return valor * FACTOR_19602;
}
