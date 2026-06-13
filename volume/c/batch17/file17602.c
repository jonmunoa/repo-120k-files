// fichero 17602 -- macros y constantes
#define LIMITE_17602 17702
#define FACTOR_17602 3

int aplicar_limite17602(int valor) {
    if (valor > LIMITE_17602) return LIMITE_17602;
    return valor * FACTOR_17602;
}
