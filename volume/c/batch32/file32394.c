// fichero 32394 -- macros y constantes
#define LIMITE_32394 32494
#define FACTOR_32394 5

int aplicar_limite32394(int valor) {
    if (valor > LIMITE_32394) return LIMITE_32394;
    return valor * FACTOR_32394;
}
