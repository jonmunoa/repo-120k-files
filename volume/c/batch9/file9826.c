// fichero 9826 -- macros y constantes -- MODIFICADO
#define LIMITE_9826 10026
#define FACTOR_9826 3

int aplicar_limite9826(int valor) {
    if (valor > LIMITE_9826) return LIMITE_9826;
    return valor * FACTOR_9826;
}
