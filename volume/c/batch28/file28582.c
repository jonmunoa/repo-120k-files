// fichero 28582 -- macros y constantes
#define LIMITE_28582 28682
#define FACTOR_28582 3

int aplicar_limite28582(int valor) {
    if (valor > LIMITE_28582) return LIMITE_28582;
    return valor * FACTOR_28582;
}
