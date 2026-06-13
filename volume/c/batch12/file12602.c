// fichero 12602 -- macros y constantes
#define LIMITE_12602 12702
#define FACTOR_12602 3

int aplicar_limite12602(int valor) {
    if (valor > LIMITE_12602) return LIMITE_12602;
    return valor * FACTOR_12602;
}
