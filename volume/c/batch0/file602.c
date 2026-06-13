// fichero 602 -- macros y constantes
#define LIMITE_602 702
#define FACTOR_602 3

int aplicar_limite602(int valor) {
    if (valor > LIMITE_602) return LIMITE_602;
    return valor * FACTOR_602;
}
