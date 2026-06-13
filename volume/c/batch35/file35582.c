// fichero 35582 -- macros y constantes
#define LIMITE_35582 35682
#define FACTOR_35582 3

int aplicar_limite35582(int valor) {
    if (valor > LIMITE_35582) return LIMITE_35582;
    return valor * FACTOR_35582;
}
