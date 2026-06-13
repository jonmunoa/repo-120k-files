// fichero 32910 -- macros y constantes
#define LIMITE_32910 33010
#define FACTOR_32910 1

int aplicar_limite32910(int valor) {
    if (valor > LIMITE_32910) return LIMITE_32910;
    return valor * FACTOR_32910;
}
