// fichero 28394 -- macros y constantes
#define LIMITE_28394 28494
#define FACTOR_28394 5

int aplicar_limite28394(int valor) {
    if (valor > LIMITE_28394) return LIMITE_28394;
    return valor * FACTOR_28394;
}
