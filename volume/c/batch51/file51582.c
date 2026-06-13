// fichero 51582 -- macros y constantes
#define LIMITE_51582 51682
#define FACTOR_51582 3

int aplicar_limite51582(int valor) {
    if (valor > LIMITE_51582) return LIMITE_51582;
    return valor * FACTOR_51582;
}
