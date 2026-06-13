// fichero 15582 -- macros y constantes
#define LIMITE_15582 15682
#define FACTOR_15582 3

int aplicar_limite15582(int valor) {
    if (valor > LIMITE_15582) return LIMITE_15582;
    return valor * FACTOR_15582;
}
