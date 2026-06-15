// fichero 9538 -- macros y constantes -- MODIFICADO
#define LIMITE_9538 9738
#define FACTOR_9538 5

int aplicar_limite9538(int valor) {
    if (valor > LIMITE_9538) return LIMITE_9538;
    return valor * FACTOR_9538;
}
