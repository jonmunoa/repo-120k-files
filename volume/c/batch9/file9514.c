// fichero 9514 -- macros y constantes
#define LIMITE_9514 9614
#define FACTOR_9514 5

int aplicar_limite9514(int valor) {
    if (valor > LIMITE_9514) return LIMITE_9514;
    return valor * FACTOR_9514;
}
