// fichero 45582 -- macros y constantes
#define LIMITE_45582 45682
#define FACTOR_45582 3

int aplicar_limite45582(int valor) {
    if (valor > LIMITE_45582) return LIMITE_45582;
    return valor * FACTOR_45582;
}
