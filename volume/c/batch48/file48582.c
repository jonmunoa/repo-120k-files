// fichero 48582 -- macros y constantes
#define LIMITE_48582 48682
#define FACTOR_48582 3

int aplicar_limite48582(int valor) {
    if (valor > LIMITE_48582) return LIMITE_48582;
    return valor * FACTOR_48582;
}
