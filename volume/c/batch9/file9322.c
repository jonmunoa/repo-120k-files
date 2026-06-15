// fichero 9322 -- macros y constantes -- MODIFICADO
#define LIMITE_9322 9522
#define FACTOR_9322 4

int aplicar_limite9322(int valor) {
    if (valor > LIMITE_9322) return LIMITE_9322;
    return valor * FACTOR_9322;
}
