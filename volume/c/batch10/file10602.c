// fichero 10602 -- macros y constantes
#define LIMITE_10602 10702
#define FACTOR_10602 3

int aplicar_limite10602(int valor) {
    if (valor > LIMITE_10602) return LIMITE_10602;
    return valor * FACTOR_10602;
}
