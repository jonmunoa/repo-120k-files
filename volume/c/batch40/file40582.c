// fichero 40582 -- macros y constantes
#define LIMITE_40582 40682
#define FACTOR_40582 3

int aplicar_limite40582(int valor) {
    if (valor > LIMITE_40582) return LIMITE_40582;
    return valor * FACTOR_40582;
}
