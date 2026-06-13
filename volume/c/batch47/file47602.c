// fichero 47602 -- macros y constantes
#define LIMITE_47602 47702
#define FACTOR_47602 3

int aplicar_limite47602(int valor) {
    if (valor > LIMITE_47602) return LIMITE_47602;
    return valor * FACTOR_47602;
}
