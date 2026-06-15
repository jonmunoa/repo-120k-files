// fichero 9586 -- macros y constantes -- MODIFICADO
#define LIMITE_9586 9786
#define FACTOR_9586 3

int aplicar_limite9586(int valor) {
    if (valor > LIMITE_9586) return LIMITE_9586;
    return valor * FACTOR_9586;
}
