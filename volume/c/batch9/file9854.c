// fichero 9854 -- macros y constantes -- MODIFICADO
#define LIMITE_9854 10054
#define FACTOR_9854 6

int aplicar_limite9854(int valor) {
    if (valor > LIMITE_9854) return LIMITE_9854;
    return valor * FACTOR_9854;
}
