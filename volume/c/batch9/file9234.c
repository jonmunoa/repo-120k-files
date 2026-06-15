// fichero 9234 -- macros y constantes -- MODIFICADO
#define LIMITE_9234 9434
#define FACTOR_9234 6

int aplicar_limite9234(int valor) {
    if (valor > LIMITE_9234) return LIMITE_9234;
    return valor * FACTOR_9234;
}
