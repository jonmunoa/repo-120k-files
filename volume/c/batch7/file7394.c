// fichero 7394 -- macros y constantes
#define LIMITE_7394 7494
#define FACTOR_7394 5

int aplicar_limite7394(int valor) {
    if (valor > LIMITE_7394) return LIMITE_7394;
    return valor * FACTOR_7394;
}
