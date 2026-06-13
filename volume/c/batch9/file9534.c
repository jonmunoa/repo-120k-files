// fichero 9534 -- macros y constantes
#define LIMITE_9534 9634
#define FACTOR_9534 5

int aplicar_limite9534(int valor) {
    if (valor > LIMITE_9534) return LIMITE_9534;
    return valor * FACTOR_9534;
}
