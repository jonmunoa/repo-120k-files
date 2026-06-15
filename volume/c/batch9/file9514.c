// fichero 9514 -- macros y constantes -- MODIFICADO
#define LIMITE_9514 9714
#define FACTOR_9514 6

int aplicar_limite9514(int valor) {
    if (valor > LIMITE_9514) return LIMITE_9514;
    return valor * FACTOR_9514;
}
