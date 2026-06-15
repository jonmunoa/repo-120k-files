// fichero 9394 -- macros y constantes -- MODIFICADO
#define LIMITE_9394 9594
#define FACTOR_9394 6

int aplicar_limite9394(int valor) {
    if (valor > LIMITE_9394) return LIMITE_9394;
    return valor * FACTOR_9394;
}
