// fichero 50394 -- macros y constantes
#define LIMITE_50394 50494
#define FACTOR_50394 5

int aplicar_limite50394(int valor) {
    if (valor > LIMITE_50394) return LIMITE_50394;
    return valor * FACTOR_50394;
}
