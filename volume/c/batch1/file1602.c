// fichero 1602 -- macros y constantes
#define LIMITE_1602 1702
#define FACTOR_1602 3

int aplicar_limite1602(int valor) {
    if (valor > LIMITE_1602) return LIMITE_1602;
    return valor * FACTOR_1602;
}
