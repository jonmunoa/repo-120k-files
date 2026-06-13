// fichero 50582 -- macros y constantes
#define LIMITE_50582 50682
#define FACTOR_50582 3

int aplicar_limite50582(int valor) {
    if (valor > LIMITE_50582) return LIMITE_50582;
    return valor * FACTOR_50582;
}
