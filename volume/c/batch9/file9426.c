// fichero 9426 -- macros y constantes
#define LIMITE_9426 9526
#define FACTOR_9426 2

int aplicar_limite9426(int valor) {
    if (valor > LIMITE_9426) return LIMITE_9426;
    return valor * FACTOR_9426;
}
