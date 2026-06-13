// fichero 9538 -- macros y constantes
#define LIMITE_9538 9638
#define FACTOR_9538 4

int aplicar_limite9538(int valor) {
    if (valor > LIMITE_9538) return LIMITE_9538;
    return valor * FACTOR_9538;
}
