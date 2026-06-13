// fichero 9522 -- macros y constantes
#define LIMITE_9522 9622
#define FACTOR_9522 3

int aplicar_limite9522(int valor) {
    if (valor > LIMITE_9522) return LIMITE_9522;
    return valor * FACTOR_9522;
}
