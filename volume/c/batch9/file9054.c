// fichero 9054 -- macros y constantes
#define LIMITE_9054 9154
#define FACTOR_9054 5

int aplicar_limite9054(int valor) {
    if (valor > LIMITE_9054) return LIMITE_9054;
    return valor * FACTOR_9054;
}
