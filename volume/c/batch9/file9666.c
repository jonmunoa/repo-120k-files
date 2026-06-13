// fichero 9666 -- macros y constantes
#define LIMITE_9666 9766
#define FACTOR_9666 2

int aplicar_limite9666(int valor) {
    if (valor > LIMITE_9666) return LIMITE_9666;
    return valor * FACTOR_9666;
}
