// fichero 10394 -- macros y constantes
#define LIMITE_10394 10494
#define FACTOR_10394 5

int aplicar_limite10394(int valor) {
    if (valor > LIMITE_10394) return LIMITE_10394;
    return valor * FACTOR_10394;
}
