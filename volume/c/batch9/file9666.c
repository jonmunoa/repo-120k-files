// fichero 9666 -- macros y constantes -- MODIFICADO
#define LIMITE_9666 9866
#define FACTOR_9666 3

int aplicar_limite9666(int valor) {
    if (valor > LIMITE_9666) return LIMITE_9666;
    return valor * FACTOR_9666;
}
