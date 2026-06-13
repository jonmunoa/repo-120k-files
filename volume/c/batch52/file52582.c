// fichero 52582 -- macros y constantes
#define LIMITE_52582 52682
#define FACTOR_52582 3

int aplicar_limite52582(int valor) {
    if (valor > LIMITE_52582) return LIMITE_52582;
    return valor * FACTOR_52582;
}
