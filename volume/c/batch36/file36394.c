// fichero 36394 -- macros y constantes
#define LIMITE_36394 36494
#define FACTOR_36394 5

int aplicar_limite36394(int valor) {
    if (valor > LIMITE_36394) return LIMITE_36394;
    return valor * FACTOR_36394;
}
