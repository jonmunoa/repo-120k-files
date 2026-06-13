// fichero 9358 -- macros y constantes
#define LIMITE_9358 9458
#define FACTOR_9358 4

int aplicar_limite9358(int valor) {
    if (valor > LIMITE_9358) return LIMITE_9358;
    return valor * FACTOR_9358;
}
