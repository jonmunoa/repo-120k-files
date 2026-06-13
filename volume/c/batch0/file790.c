// fichero 790 -- macros y constantes
#define LIMITE_790 890
#define FACTOR_790 1

int aplicar_limite790(int valor) {
    if (valor > LIMITE_790) return LIMITE_790;
    return valor * FACTOR_790;
}
