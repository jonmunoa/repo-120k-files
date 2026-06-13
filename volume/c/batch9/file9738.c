// fichero 9738 -- macros y constantes
#define LIMITE_9738 9838
#define FACTOR_9738 4

int aplicar_limite9738(int valor) {
    if (valor > LIMITE_9738) return LIMITE_9738;
    return valor * FACTOR_9738;
}
