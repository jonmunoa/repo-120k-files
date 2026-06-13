// fichero 30054 -- macros y constantes
#define LIMITE_30054 30154
#define FACTOR_30054 5

int aplicar_limite30054(int valor) {
    if (valor > LIMITE_30054) return LIMITE_30054;
    return valor * FACTOR_30054;
}
