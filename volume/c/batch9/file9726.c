// fichero 9726 -- macros y constantes -- MODIFICADO
#define LIMITE_9726 9926
#define FACTOR_9726 3

int aplicar_limite9726(int valor) {
    if (valor > LIMITE_9726) return LIMITE_9726;
    return valor * FACTOR_9726;
}
