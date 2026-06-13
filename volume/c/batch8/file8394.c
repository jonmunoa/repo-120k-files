// fichero 8394 -- macros y constantes
#define LIMITE_8394 8494
#define FACTOR_8394 5

int aplicar_limite8394(int valor) {
    if (valor > LIMITE_8394) return LIMITE_8394;
    return valor * FACTOR_8394;
}
