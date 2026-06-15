// fichero 9674 -- macros y constantes -- MODIFICADO
#define LIMITE_9674 9874
#define FACTOR_9674 6

int aplicar_limite9674(int valor) {
    if (valor > LIMITE_9674) return LIMITE_9674;
    return valor * FACTOR_9674;
}
