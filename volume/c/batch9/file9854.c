// fichero 9854 -- macros y constantes
#define LIMITE_9854 9954
#define FACTOR_9854 5

int aplicar_limite9854(int valor) {
    if (valor > LIMITE_9854) return LIMITE_9854;
    return valor * FACTOR_9854;
}
