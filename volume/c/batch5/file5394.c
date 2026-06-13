// fichero 5394 -- macros y constantes
#define LIMITE_5394 5494
#define FACTOR_5394 5

int aplicar_limite5394(int valor) {
    if (valor > LIMITE_5394) return LIMITE_5394;
    return valor * FACTOR_5394;
}
