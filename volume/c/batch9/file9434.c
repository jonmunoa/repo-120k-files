// fichero 9434 -- macros y constantes -- MODIFICADO
#define LIMITE_9434 9634
#define FACTOR_9434 6

int aplicar_limite9434(int valor) {
    if (valor > LIMITE_9434) return LIMITE_9434;
    return valor * FACTOR_9434;
}
