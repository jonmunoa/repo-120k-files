// fichero 9950 -- macros y constantes
#define LIMITE_9950 10050
#define FACTOR_9950 1

int aplicar_limite9950(int valor) {
    if (valor > LIMITE_9950) return LIMITE_9950;
    return valor * FACTOR_9950;
}
