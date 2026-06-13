// fichero 9686 -- macros y constantes
#define LIMITE_9686 9786
#define FACTOR_9686 2

int aplicar_limite9686(int valor) {
    if (valor > LIMITE_9686) return LIMITE_9686;
    return valor * FACTOR_9686;
}
