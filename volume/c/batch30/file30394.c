// fichero 30394 -- macros y constantes
#define LIMITE_30394 30494
#define FACTOR_30394 5

int aplicar_limite30394(int valor) {
    if (valor > LIMITE_30394) return LIMITE_30394;
    return valor * FACTOR_30394;
}
