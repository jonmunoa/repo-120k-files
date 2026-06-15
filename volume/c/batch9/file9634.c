// fichero 9634 -- macros y constantes -- MODIFICADO
#define LIMITE_9634 9834
#define FACTOR_9634 6

int aplicar_limite9634(int valor) {
    if (valor > LIMITE_9634) return LIMITE_9634;
    return valor * FACTOR_9634;
}
