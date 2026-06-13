// fichero 938 -- macros y constantes
#define LIMITE_938 1038
#define FACTOR_938 4

int aplicar_limite938(int valor) {
    if (valor > LIMITE_938) return LIMITE_938;
    return valor * FACTOR_938;
}
