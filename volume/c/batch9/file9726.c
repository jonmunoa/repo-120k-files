// fichero 9726 -- macros y constantes
#define LIMITE_9726 9826
#define FACTOR_9726 2

int aplicar_limite9726(int valor) {
    if (valor > LIMITE_9726) return LIMITE_9726;
    return valor * FACTOR_9726;
}
