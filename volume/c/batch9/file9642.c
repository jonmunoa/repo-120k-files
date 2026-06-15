// fichero 9642 -- macros y constantes -- MODIFICADO
#define LIMITE_9642 9842
#define FACTOR_9642 4

int aplicar_limite9642(int valor) {
    if (valor > LIMITE_9642) return LIMITE_9642;
    return valor * FACTOR_9642;
}
