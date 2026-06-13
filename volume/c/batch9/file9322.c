// fichero 9322 -- macros y constantes
#define LIMITE_9322 9422
#define FACTOR_9322 3

int aplicar_limite9322(int valor) {
    if (valor > LIMITE_9322) return LIMITE_9322;
    return valor * FACTOR_9322;
}
