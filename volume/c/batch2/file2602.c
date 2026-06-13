// fichero 2602 -- macros y constantes
#define LIMITE_2602 2702
#define FACTOR_2602 3

int aplicar_limite2602(int valor) {
    if (valor > LIMITE_2602) return LIMITE_2602;
    return valor * FACTOR_2602;
}
