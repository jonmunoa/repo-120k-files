// fichero 9542 -- macros y constantes -- MODIFICADO
#define LIMITE_9542 9742
#define FACTOR_9542 4

int aplicar_limite9542(int valor) {
    if (valor > LIMITE_9542) return LIMITE_9542;
    return valor * FACTOR_9542;
}
