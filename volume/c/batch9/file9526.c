// fichero 9526 -- macros y constantes -- MODIFICADO
#define LIMITE_9526 9726
#define FACTOR_9526 3

int aplicar_limite9526(int valor) {
    if (valor > LIMITE_9526) return LIMITE_9526;
    return valor * FACTOR_9526;
}
