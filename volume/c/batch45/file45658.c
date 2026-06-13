// fichero 45658 -- macros y constantes
#define LIMITE_45658 45758
#define FACTOR_45658 4

int aplicar_limite45658(int valor) {
    if (valor > LIMITE_45658) return LIMITE_45658;
    return valor * FACTOR_45658;
}
